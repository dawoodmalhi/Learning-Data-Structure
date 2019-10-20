#include <iostream>
#include "cNode.h"

using namespace std;

cNode::cNode() :data(0),priority(0)
{
}

cNode::cNode(int d):data(d), priority(0){
}

cNode::cNode(int d, int p):data(d), priority(p)
{}

int cNode::getData()const{
			return data;
		}

void cNode::setData(int data){
        	this->data=data;
		}
		
void cNode::print()const{
			cout<<data<<" ";
		}
int cNode::getPriority()const{
	return priority;
}

void cNode::setPriority(int Prior){
	this->priority=Prior;
}

bool cNode::isSimilar(cNode* &ptr){
	if(ptr->getData()==this->getData())
	  if(ptr->getPriority()==this->getPriority())
	    return true;
	return false;
}

cNode::~cNode()
{
}
