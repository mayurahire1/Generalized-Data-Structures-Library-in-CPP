//////////////////////////////////////////////////////////////
//
//      Project Name : Generalized Data Strucures Library.
//      Language Used : C++ 
//
//////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////
//
//      Header File Inclusion 
//
//////////////////////////////////////////////////////////////
#include "DataStructures.h"
#include<iostream>
#include <string>

using namespace std;
using namespace DataStructures;


int main()
{
    //--------------------------- Singly Linear ----------------------------------

    // SinglyLL<int> sobj;

    // sobj.InsertFirst(51);
    // sobj.InsertFirst(21);
    // sobj.InsertFirst(11);

    // sobj.Display();
    // cout << "Number of nodes  : " << sobj.Count() << endl << endl;

    // sobj.InsertLast(101);
    // sobj.InsertLast(111);
    // sobj.InsertLast(121);

    // sobj.Display();
    // cout << "Number of nodes  : " << sobj.Count() << endl << endl;
    
    // sobj.InsertAtPos(99, 4);

    // sobj.Display();
    // cout << "Number of nodes  : " << sobj.Count() << endl << endl;

    // sobj.DeleteFirst();
    
    // sobj.Display();
    // cout << "Number of nodes  : " << sobj.Count() << endl << endl;
    
    // sobj.DeleteLast();
    
    // sobj.Display();
    // cout << "Number of nodes  : " << sobj.Count() << endl << endl;

    // sobj.DeleteAtPos(3);
    
    // sobj.Display();
    // cout << "Number of nodes  : " << sobj.Count() << endl << endl;

    // if(sobj.Search(101))
    // {
    //     cout << "Element is present in the list" << endl;
    // }
    // else
    // {
    //     cout << "Element is not present in the list" << endl;
    // }


    //--------------------------- Doubly Linear ----------------------------------

    // DoublyLL<int> dobj;

    // dobj.InsertFirst(51);
    // dobj.InsertFirst(21);
    // dobj.InsertFirst(11);

    // dobj.Display();
    // cout << "Number of nodes  : " << dobj.Count() << endl << endl;

    
    // dobj.InsertLast(101);
    // dobj.InsertLast(111);
    // dobj.InsertLast(121);

    // dobj.Display();
    // cout << "Number of nodes  : " << dobj.Count() << endl << endl;

    // dobj.InsertAtPos(99,4);

    // dobj.Display();
    // cout << "Number of nodes  : " << dobj.Count() << endl << endl;

    // dobj.DeleteFirst();
    
    // dobj.Display();
    // cout << "Number of nodes  : " << dobj.Count() << endl << endl;

    // dobj.DeleteLast();

    // dobj.Display();
    // cout << "Number of nodes  : " << dobj.Count() << endl << endl;

    // dobj.DeleteAtPos(3);

    // dobj.Display();
    // cout << "Number of nodes  : " << dobj.Count() << endl << endl;

    // if(dobj.Search(99))
    // {
    //     cout << "Element is present in the list" << endl;
    // }
    // else
    // {
    //     cout << "Element is not present in the list" << endl;
    // }


    // ----------------------- Singly Circular Linked List -----------------------

    // SinglyCL<int> scobj;

    // scobj.InsertFirst(51);
    // scobj.InsertFirst(21);
    // scobj.InsertFirst(11);

    // scobj.Display();
    // cout << "Number of nodes  : " << scobj.Count() << endl << endl;

    // scobj.InsertLast(101);
    // scobj.InsertLast(111);
    // scobj.InsertLast(121);

    // scobj.Display();
    // cout << "Number of nodes  : " << scobj.Count() << endl << endl;

    // scobj.InsertAtPos(99,4);

    // scobj.Display();
    // cout << "Number of nodes  : " << scobj.Count() << endl << endl;

    // scobj.DeleteFirst();

    // scobj.Display();
    // cout << "Number of nodes  : " << scobj.Count() << endl << endl;
    
    // scobj.DeleteLast();

    // scobj.Display();
    // cout << "Number of nodes  : " << scobj.Count() << endl << endl;

    // scobj.DeleteAtPos(3);

    // scobj.Display();
    // cout << "Number of nodes  : " << scobj.Count() << endl << endl;

    // if(scobj.Search(99))
    // {
    //     cout << "Element is present in the list" << endl;
    // }
    // else
    // {
    //     cout << "Element is not present in the list" << endl;
    // }
    
    // ----------------------- Doubly Circular Linked List -----------------------

    // DoublyCL<int> dcobj;

    // dcobj.InsertFirst(51);
    // dcobj.InsertFirst(21);
    // dcobj.InsertFirst(11);

    // dcobj.Display();
    // cout << "Number of nodes  : " << dcobj.Count() << endl << endl;

    // dcobj.InsertLast(101);
    // dcobj.InsertLast(111);
    // dcobj.InsertLast(151);

    
    // dcobj.Display();
    // cout << "Number of nodes  : " << dcobj.Count() << endl << endl;

    // dcobj.InsertAtPos(99, 4);
    
    // dcobj.Display();
    // cout << "Number of nodes  : " << dcobj.Count() << endl << endl;

    // dcobj.DeleteFirst();

    // dcobj.Display();
    // cout << "Number of nodes  : " << dcobj.Count() << endl << endl;

    // dcobj.DeleteLast();
    
    // dcobj.Display();
    // cout << "Number of nodes  : " << dcobj.Count() << endl << endl;

    // dcobj.DeleteAtPos(3);

    // dcobj.Display();
    // cout << "Number of nodes  : " << dcobj.Count() << endl << endl;

    // if(dcobj.Search(101))
    // {
    //     cout << "Element is present in the list" << endl;
    // }
    // else
    // {
    //     cout << "Element is not present in the list" << endl;
    // }

    // ----------------------- Stack -----------------------

    // Stack<int> stk;
    
    // stk.Push(11);
    // stk.Push(21);
    // stk.Push(51);

    // stk.Display();
    // cout << "Number of nodes  : " << stk.Count() << endl << endl;

    // cout << "Popped Element is : " << stk.Pop() << endl;
    // stk.Display();
    // cout << "Number of nodes  : " << stk.Count() << endl << endl;
    
    // cout << "Top Element is : " << stk.Peek() << endl;
    // stk.Display();

    // ----------------------- Queue -----------------------

    Queue<int> queue;

    queue.Enqueue(11);
    queue.Enqueue(21);
    queue.Enqueue(51);
    queue.Enqueue(101);

    queue.Display();
    cout << "Number of elements  : " << queue.Count() << endl << endl;

    cout << "Deleted Element is : " << queue.Deque() << endl;

    queue.Display();
    cout << "Number of elements  : " << queue.Count() << endl << endl;

    return 0;
}