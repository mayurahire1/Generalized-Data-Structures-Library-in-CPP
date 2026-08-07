// pragma once for this file should included only once
#pragma once

// Header file inclusion
#include<iostream>
using namespace std;

namespace DataStructures
{
    ////////////////////////////////////////
    //
    //  Singly Linear Linked List
    //
    ///////////////////////////////////////
    template<class T>
    class SinglyLL
    {
        private:
            // Node structure of Singly Linear Linked List
            struct Node
            {
                T data;
                Node *next;
            };

            Node *first;            // Points to head Node
            int iCount;             // Maintain number of count

        public:
            SinglyLL();
            
            void Display();
            int Count();

            void InsertFirst(T);
            void InsertLast(T);
            void InsertAtPos(T, int);

            void DeleteFirst();
            void DeleteLast();
            void DeleteAtPos(int);

            bool Search(T);
    };

    ////////////////////////////////////////
    //
    //  Doubly Linear Linked List
    //
    ///////////////////////////////////////
    template<class T>
    class DoublyLL
    {
        private:
            // Node structure of Doubly Linear Linked List
            struct Node
            {
                T data;
                Node *next;
                Node *prev;
            };

            Node *first;            // Points to head Node
            int iCount;             // Maintain number of count

        public:
            DoublyLL();
            
            void Display();
            int Count();

            void InsertFirst(T);
            void InsertLast(T);
            void InsertAtPos(T, int);

            void DeleteFirst();
            void DeleteLast();
            void DeleteAtPos(int);

            bool Search(T);
    };
}


///////////////////////////////////////////////////////////////////////////////////////
// ---------------------Singly Linear Linked list function definions start-------------
///////////////////////////////////////////////////////////////////////////////////////

template<class T>
DataStructures :: SinglyLL<T> :: SinglyLL()
{
    first = NULL;
    iCount = 0;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Display
//    Output        :  void
//    Description   :  Display the Nodes of Linked List
//
////////////////////////////////////////////////////////////
template<class T>
void DataStructures :: SinglyLL<T> :: Display()
{
    Node *temp = first;

    while(temp != NULL)
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Count
//    Output        :  int
//    Description   :  Count total number of list
//
////////////////////////////////////////////////////////////
template<class T>
int DataStructures :: SinglyLL<T> :: Count()
{
    return iCount;
}

////////////////////////////////////////////////////////////
//
//    Function name :  InsertFirst
//    Input         :  T
//    Output        :  void
//    Description   :  Insert the element at first position
//
////////////////////////////////////////////////////////////
template<class T>
void DataStructures :: SinglyLL<T> :: InsertFirst(T no)
{
    Node *newn = new Node;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    iCount++;
}


////////////////////////////////////////////////////////////
//
//    Function name :  InsertLast
//    Input         :  T
//    Output        :  void
//    Description   :  Insert the element at last position
//
////////////////////////////////////////////////////////////
template<class T>
void DataStructures :: SinglyLL<T> :: InsertLast(T no)
{
    Node *temp = NULL;
    Node *newn = NULL;

    newn = new Node;
    newn->data = no;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    iCount++;
}


////////////////////////////////////////////////////////////
//
//    Function name :  InsertAtPos
//    Input         :  T , iPos
//    Output        :  void
//    Description   :  Insert the element at given position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: SinglyLL<T> :: InsertAtPos(T no, int iPos)
{
    int i = 0;
    Node *newn = NULL;
    Node *temp = NULL;

    if(iPos < 1 || (iPos > iCount + 1))
    {
        printf("Invalid Position..!");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(no);
    }
    else
    {
        temp = first;

        newn = new Node;
        newn->data = no;
        newn->next = NULL;

        for(i = 1 ; i < (iPos - 1); i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp-> next = newn;

        iCount++;
    }
}

////////////////////////////////////////////////////////////
//
//    Function name :  DeleteFirst
//    Output        :  void
//    Description   :  Delete element from first Position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: SinglyLL<T> :: DeleteFirst()
{
    Node *temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        first = first->next;
        delete temp;
    }

    iCount--;
}


////////////////////////////////////////////////////////////
//
//    Function name :  DeleteLast
//    Output        :  void
//    Description   :  Delete element from last position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: SinglyLL<T> :: DeleteLast()
{
    Node *temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
}

////////////////////////////////////////////////////////////
//
//    Function name :  DeleteAtPos
//    Input         :  int
//    Output        :  void
//    Description   :  Delete element from the given position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: SinglyLL<T> :: DeleteAtPos(int iPos)
{
    Node *temp = NULL;
    Node *target = NULL;
    int i = 0;

    if(iPos < 1 || iPos > (iCount))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 1 ; i < (iPos - 1); i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = temp->next->next;
        delete target;

        iCount--;
    }

}

////////////////////////////////////////////////////////////
//
//    Function name :  Search
//    Input         :  T
//    Output        :  bool
//    Description   :  Search the given element in the linked list
//
////////////////////////////////////////////////////////////
template<class T>
bool DataStructures :: SinglyLL<T> :: Search(T key)
{
    Node *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

///////////////////////////////////////////////////////////////////////////////////////
// ---------------------Singly Linear Linked list functions definions end-------------
///////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////
// ---------------------Doubly Linear Linked list functions definions start-------------
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
DataStructures :: DoublyLL<T> :: DoublyLL()
{
    first = NULL;
    iCount = 0;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Display
//    Output        :  void
//    Description   :  Display the Nodes of Linked List
//
////////////////////////////////////////////////////////////
template<class T>
void DataStructures :: DoublyLL<T> :: Display()
{
    Node *temp = first;

    cout << "NULL <=> " ;
    while(temp != NULL)
    {
        cout << "| " << temp->data << " | <=> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Count
//    Output        :  int
//    Description   :  Count total number of list
//
////////////////////////////////////////////////////////////
template <class T>
int DataStructures :: DoublyLL<T> :: Count()
{
    return this->iCount;
}


////////////////////////////////////////////////////////////
//
//    Function name :  InsertFirst
//    Input         :  T
//    Output        :  void
//    Description   :  Insert the element at first position
//
////////////////////////////////////////////////////////////
template <class T> 
void DataStructures :: DoublyLL<T> :: InsertFirst(T no)
{
    Node *newn = NULL;

    newn = new Node();
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    iCount++;
}


////////////////////////////////////////////////////////////
//
//    Function name :  InsertLast
//    Input         :  T
//    Output        :  void
//    Description   :  Insert the element at last position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: DoublyLL<T> :: InsertLast(T no)
{
    Node *newn = NULL;
    Node *temp = NULL;

    newn = new Node;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////
// ---------------------Doubly Linear Linked list functions definions end-------------
///////////////////////////////////////////////////////////////////////////////////////