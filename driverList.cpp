#include "cNode.cpp"
#include "cList.cpp"
#include <iostream>
using namespace std;
int main()
{
    cout << "Test 1" << endl;
    cNode *ptr = new cNode;
    ptr->setData(3);
    cList list1(ptr); //checking of constructor
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 2" << endl;
    if (list1.isEmpty()) //checking of isEmpty function
        cout << "list is Empty" << endl;
    else
        cout << "list is not Empty" << endl;
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 3" << endl;
    ptr = new cNode;
    ptr->setData(2);
    cNode *ptr1 = new cNode;
    ptr1->setData(9);
    list1.insert(ptr).insert(ptr1); //checking insert function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 4" << endl;
    ptr = new cNode;
    ptr->setData(7);
    list1.insertAt(1, ptr); //checking insertAt function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 5" << endl;
    list1.swapNodesAt(0, 2); //checking swapNodesAt function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 6" << endl;
    list1[2].print(); //checking index operator overloading function
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 7" << endl;
    list1.reverse(); //checking reverse function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 8" << endl;
    list1.remove(); //checking remove function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 9" << endl;
    list1.removeAt(0); //checking removeAt function
    list1.print();     //checking print function
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 10" << endl;
    cNode **ptrArray = new cNode *[4];
    for (int i = 0; i < 4; ++i)
        ptrArray[i] = new cNode;
    ptrArray[0]->setData(2);
    ptrArray[1]->setData(0);
    ptrArray[2]->setData(7);
    ptrArray[3]->setData(5);
    cList list2;
    list2.insert(ptrArray[0]).insert(ptrArray[1]).insert(ptrArray[2]).insert(ptrArray[3]);
    list1 + list2; //checking addition overloading function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 11" << endl;
    cList list3(list1); //checking copy constructor function
    list3.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 12" << endl;
    cList list4;
    list4 = list1; //checking = operator overloading function
    list4.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 13" << endl;
    cout << "count is " << list1.getCount(); //checking getcount function
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 14" << endl;
    ptr = &list1[3];
    list1.deleteNodes(ptr); //checking deleteNodes function
    list1.print();
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    cout << endl;
    cout << "Test 15" << endl;
    list2 = list1;
    if (list1.isSimilar(list2))
        cout << "List1 is similar to List2";
    else
        cout << "List1 is not similar to List2";
    cout << endl
         << endl
         << endl;
    for (int i = 0; i < 10; i++)
        cout << "-";

    return 0;
}
