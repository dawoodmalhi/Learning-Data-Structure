#include "cStack.h"


cStack::cStack():top(NULL){
		}
		
cStack::cStack (cNode* &ptr):top(ptr){
			top->next=NULL;
			ptr=NULL;
			return *this;
		}

cStack::bool isNotEmpty()const{
		if(top)
		return true;
		else
		return false;
		}
		
cStack::bool isEmpty()const{
		if(top)
		return false;
		else
		return true;
		}
		
cStack::cStack& push(cNode* &ptr){
			ptr->next=top;
			top=ptr;
			ptr=NULL;                     //
			return *this;
		}

cStack::cNode* pop(){
			cNode *ptr=top;
			top=top->next;
			ptr->next=NULL;
			return ptr;
		}
		
cStack::void print()const{
		if(!top)
		cout<<"\n Stack is Empty!";
		else{
			cNode *ptr=top;
			while(ptr)
			{
				ptr->print();
				ptr=ptr->next;
			}
		}
		}
		
cStack::cStack(const cStack &src){
			this->top=src.top;
			if(src.top){
				cNode *sptr,*dptr;
				dptr=top=new cNode(*src.top);
				sptr=src.top->next;
				while(sptr){
					dptr->next=new cNode(*sptr);
					sptr=sptr->next;
					dptr=dptr->next;
				}
				
			}
		}
		
cStack::cStack& operator=(const cStack& obj){
			if(this==obj)
			return *this;
			if(true){
				cStack temp;
				temp.top=top;
			}
			if(true){
				cStack temp=obj;         //
				top=temp.top;
				temp.top=NULL;
			}
			return *this;
		}

cStack::~cStack()
{
	cNode *ptr=top;
			while(ptr)
			{
				ptr=ptr->next;
				delete top;
				top=ptr;
			}
}
