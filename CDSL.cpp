//////////////////////////////////////////////////////////////
//
//      Project Name : Customised Data Strucures Library.
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


    DoublyLL<int> dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    cout << "Number of nodes  : " << dobj.Count() << endl << endl;

    
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    cout << "Number of nodes  : " << dobj.Count() << endl << endl;

   return 0;
}