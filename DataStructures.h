// #pragma once for this file should included only once
#pragma once

// Header file inclusion
#include <iostream>
using namespace std;

namespace DataStructures
{
    ////////////////////////////////////////
    //
    //  Singly Linear Linked List
    //
    ///////////////////////////////////////
    template <class T>
    class SinglyLL
    {
    private:
        // Node structure of Singly Linear Linked List
        struct Node
        {
            T data;
            Node *next;
        };

        Node *first; // Points to head Node
        int iCount;  // Maintain number of nodes

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
    template <class T>
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

        Node *first; // Points to head Node
        int iCount;  // Maintain number of nodes

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

    ////////////////////////////////////////
    //
    //  Singly Circular Linked List
    //
    ///////////////////////////////////////
    template <class T>
    class SinglyCL
    {
    private:
        // Node structure of Doubly Linear Linked List
        struct Node
        {
            T data;
            Node *next;
        };

        Node *first; // Points to head Node
        Node *last;  // Points to tail Node
        int iCount;  // Maintain number of nodes

    public:
        SinglyCL();

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
    //  Doubly Circular Linked List
    //
    ///////////////////////////////////////
    template <class T>
    class DoublyCL
    {
    private:
        // Node structure of Doubly circular Linked List
        struct Node
        {
            T data;
            Node *next;
            Node *prev;
        };

        Node *first; // Points to head Node
        Node *last;  // Points to tail Node
        int iCount;  // Maintain number of nodes

    public:
        DoublyCL();

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
    //  STACK
    //  (Used Linked list implementation)
    //
    ///////////////////////////////////////
    template <class T>
    class Stack
    {
    private:
        // Node structure of singly linear Linked List
        struct Node
        {
            T data;
            Node *next;
        };

        Node *top;  // Points to head Node
        int iCount; // Maintain number of nodes

    public:
        Stack();

        void Push(T);
        T Pop();
        T Peek();
        int Count();
        void Display();
    };

    ////////////////////////////////////////
    //
    //  QUEUE
    //  (Used Linked list implementation)
    //
    ///////////////////////////////////////
    template <class T>
    class Queue
    {
    private:
        // Node structure of singly linear Linked List
        struct Node
        {
            T data;
            Node *next;
        };

        Node *front; // Points to head Node
        int iCount;  // Maintain number of nodes

    public:
        Queue();

        void Enqueue(T);
        T Deque();
        int Count();
        void Display();
    };

    ////////////////////////////////////////
    //
    //  Binary Search Tree (BST)
    //
    ///////////////////////////////////////
    template <class T>
    class BST
    {
    private:
        struct Node
        {
            T data;
            Node *lChild;
            Node *rChild;
        };

        Node *root;
        int iCount;

    public:
        BST();

        void Insert(T);

        int Count();

        void Inorder();
        void Inorder(Node*);

        void Preorder();
        void Preorder(Node *);

        void Postorder();
        void Postorder(Node*);

        bool Search(T);
    };

    ////////////////////////////////////////
    //
    //  Searching
    //
    ///////////////////////////////////////
    template <class T>
    class Searching
    {
        private:
            T *Arr;
            int iSize;

        public:
            Searching(int);

            void Accept();
            void Display();

            int LinearSearch(T);
    };
}

///////////////////////////////////////////////////////////////////////////////////////
// ---------------------Singly Linear Linked list function definions start-------------
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
DataStructures ::SinglyLL<T>::SinglyLL()
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
template <class T>
void DataStructures ::SinglyLL<T>::Display()
{
    Node *temp = first;

    while (temp != NULL)
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
template <class T>
int DataStructures ::SinglyLL<T>::Count()
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
template <class T>
void DataStructures ::SinglyLL<T>::InsertFirst(T no)
{
    Node *newn = new Node;
    newn->data = no;
    newn->next = NULL;

    if (first == NULL)
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
template <class T>
void DataStructures ::SinglyLL<T>::InsertLast(T no)
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

        while (temp->next != NULL)
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
void DataStructures ::SinglyLL<T>::InsertAtPos(T no, int iPos)
{
    int i = 0;
    Node *newn = NULL;
    Node *temp = NULL;

    if (iPos < 1 || (iPos > iCount + 1))
    {
        printf("Invalid Position..!");
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(no);
    }
    else if (iPos == (iCount + 1))
    {
        InsertLast(no);
    }
    else
    {
        temp = first;

        newn = new Node;
        newn->data = no;
        newn->next = NULL;

        for (i = 1; i < (iPos - 1); i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

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
void DataStructures ::SinglyLL<T>::DeleteFirst()
{
    Node *temp = NULL;

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
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
void DataStructures ::SinglyLL<T>::DeleteLast()
{
    Node *temp = NULL;

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        while (temp->next->next != NULL)
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
void DataStructures ::SinglyLL<T>::DeleteAtPos(int iPos)
{
    Node *temp = NULL;
    Node *target = NULL;
    int i = 0;

    if (iPos < 1 || iPos > (iCount))
    {
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for (i = 1; i < (iPos - 1); i++)
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
template <class T>
bool DataStructures ::SinglyLL<T>::Search(T key)
{
    Node *temp = NULL;

    temp = first;

    while (temp != NULL)
    {
        if (temp->data == key)
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
DataStructures ::DoublyLL<T>::DoublyLL()
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
template <class T>
void DataStructures ::DoublyLL<T>::Display()
{
    Node *temp = first;

    cout << "NULL <=> ";
    while (temp != NULL)
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
int DataStructures ::DoublyLL<T>::Count()
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
void DataStructures ::DoublyLL<T>::InsertFirst(T no)
{
    Node *newn = NULL;

    newn = new Node();
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL)
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
void DataStructures ::DoublyLL<T>::InsertLast(T no)
{
    Node *newn = NULL;
    Node *temp = NULL;

    newn = new Node;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

////////////////////////////////////////////////////////////
//
//    Function name :  InsertAtPosition
//    Input         :  T, int
//    Output        :  void
//    Description   :  Insert the element at the given position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::DoublyLL<T>::InsertAtPos(T no, int iPos)
{
    int i = 0;
    Node *newn = NULL;
    Node *temp = NULL;

    if ((iPos < 1) || (iPos >= iCount + 1))
    {
        cout << "Invalid Position";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(no);
    }
    else if (iPos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        temp = first;

        newn = new Node;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for (i = 1; i < (iPos - 1); i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;

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
void DataStructures ::DoublyLL<T>::DeleteFirst()
{

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        first = first->next;
        delete first->prev;
        first->prev = NULL;
    }
    iCount--;
}

////////////////////////////////////////////////////////////
//
//    Function name :  DeleteLast
//    Output        :  void
//    Description   :  Delete element from last Position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::DoublyLL<T>::DeleteLast()
{
    Node *temp = NULL;

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        while (temp->next->next != NULL)
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
//    Description   :  Delete element from the given Position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::DoublyLL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    Node *temp = NULL;

    if ((iPos < 1) || (iPos > iCount))
    {
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for (i = 1; i < (iPos - 1); i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

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
template <class T>
bool DataStructures ::DoublyLL<T>::Search(T key)
{
    Node *temp = first;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }

        temp = temp->next;
    }

    return false;
}

///////////////////////////////////////////////////////////////////////////////////////
// --------------------- Doubly Linear Linked list functions definions end -------------
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
// --------------------- Singly Circular Linked list functions definions start --------
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
DataStructures ::SinglyCL<T>::SinglyCL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Display
//    Output        :  void
//    Description   :  Dislay all the elements from the linked list
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::SinglyCL<T>::Display()
{
    if (first == NULL && last == NULL)
    {
        return;
    }

    Node *temp = first;

    do
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    } while (temp != first);

    cout << "(first)" << endl;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Count
//    Output        :  int
//    Description   :  Count the number of nodes from the linked list
//
////////////////////////////////////////////////////////////
template <class T>
int DataStructures ::SinglyCL<T>::Count()
{
    return iCount;
}

////////////////////////////////////////////////////////////
//
//    Function name :  InsertFirst
//    Input         :  T
//    Output        :  void
//    Description   :  Insert element at the first position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::SinglyCL<T>::InsertFirst(T no)
{
    Node *newn = NULL;

    newn = new Node;
    newn->data = no;
    newn->next = NULL;

    if (first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    last->next = first;
    iCount++;
}

////////////////////////////////////////////////////////////
//
//    Function name :  InsertLast
//    Input         :  T
//    Output        :  void
//    Description   :  Insert element at the last position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::SinglyCL<T>::InsertLast(T no)
{
    Node *newn = NULL;

    newn = new Node;
    newn->data = no;
    newn->next = NULL;

    if (first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    last->next = first;
    iCount++;
}

////////////////////////////////////////////////////////////
//
//    Function name :  InsertAtPos
//    Input         :  T, int
//    Output        :  void
//    Description   :  Insert element at the given position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::SinglyCL<T>::InsertAtPos(T no, int iPos)
{
    int i = 0;
    Node *newn = NULL;
    Node *temp = NULL;

    if (iPos < 1 || (iPos > iCount + 1))
    {
        cout << "Invalid Position";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(no);
    }
    else if (iPos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        temp = first;

        newn = new Node;
        newn->data = no;
        newn->next = NULL;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        last->next = first;
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
void DataStructures ::SinglyCL<T>::DeleteFirst()
{
    if (first == NULL && last == NULL)
    {
        return;
    }
    else if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;
    }
    last->next = first;
    iCount--;
}

////////////////////////////////////////////////////////////
//
//    Function name :  DeleteLast
//    Output        :  void
//    Description   :  Delete element from last Position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::SinglyCL<T>::DeleteLast()
{
    Node *temp = NULL;

    if (first == NULL && last == NULL)
    {
        return;
    }
    else if (first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while (temp->next->next != first)
        {
            temp = temp->next;
        }

        last = temp;
        delete temp->next;
    }

    last->next = first;
    iCount--;
}

////////////////////////////////////////////////////////////
//
//    Function name :  DeleteAtPos
//    Input         :  int
//    Output        :  void
//    Description   :  Delete element from the given Position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::SinglyCL<T>::DeleteAtPos(int iPos)
{
    if (iPos < 1 || iPos > iCount)
    {
        cout << "Invalid Position";
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        Node *temp = first;

        for (int i = 1; i < (iPos - 1); i++)
        {
            temp = temp->next;
        }

        Node *target = temp->next;

        temp->next = temp->next->next;

        delete target;

        last->next = first;
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
template <class T>
bool DataStructures ::SinglyCL<T>::Search(T key)
{
    Node *temp = first;

    if (first == NULL || last == NULL)
    {
        cout << "Nothing to search";
        return false;
    }

    do
    {
        if (temp->data == key)
        {
            return true;
        }

        temp = temp->next;
    } while (temp != first);

    return false;
}

///////////////////////////////////////////////////////////////////////////////////////
// --------------------- Singly Circular Linked list functions definions end --------
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
// --------------------- Doubly Circular Linked list functions definions start --------
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
DataStructures ::DoublyCL<T>::DoublyCL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Display
//    Output        :  void
//    Description   :  Dislay all the elements from the linked list
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::DoublyCL<T>::Display()
{
    if (first == NULL || last == NULL)
    {
        return;
    }

    Node *temp = first;

    cout << "(last) <=> ";

    do
    {
        cout << "| " << temp->data << " | <=> ";
        temp = temp->next;
    } while (temp != first);

    cout << " (first) " << endl;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Count
//    Output        :  int
//    Description   :  Count the number of nodes from the linked list
//
////////////////////////////////////////////////////////////
template <class T>
int DataStructures ::DoublyCL<T>::Count()
{
    return iCount;
}

////////////////////////////////////////////////////////////
//
//    Function name :  InsertFirst
//    Input         :  T
//    Output        :  void
//    Description   :  Insert element at the first position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::DoublyCL<T>::InsertFirst(T no)
{
    Node *newn = NULL;

    newn = new Node;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        newn->prev = last;
        first = newn;
    }

    first->prev = last;
    last->next = first;

    iCount++;
}

////////////////////////////////////////////////////////////
//
//    Function name :  InsertLast
//    Input         :  T
//    Output        :  void
//    Description   :  Insert element at the last position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::DoublyCL<T>::InsertLast(T no)
{
    Node *newn = NULL;
    Node *temp = NULL;

    newn = new Node;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;

        last = newn;
    }

    last->next = first;
    first->prev = last;

    iCount++;
}

////////////////////////////////////////////////////////////
//
//    Function name :  InsertAtPos
//    Input         :  T, int
//    Output        :  void
//    Description   :  Insert element at the given position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::DoublyCL<T>::InsertAtPos(T no, int iPos)
{
    int i = 0;

    Node *newn = NULL;
    Node *temp = NULL;

    if (iPos < 1 || iPos > iCount + 1)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(no);
    }
    else if (iPos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        temp = first;

        newn = new Node;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;

        last->next = first;
        first->prev = last;

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
void DataStructures ::DoublyCL<T>::DeleteFirst()
{
    if (first == NULL || last == NULL)
    {
        return;
    }

    if (first == last)
    {
        delete first;
    }
    else
    {
        first = first->next;

        delete last->next;
    }

    first->prev = last;
    last->next = first;

    iCount--;
}

////////////////////////////////////////////////////////////
//
//    Function name :  DeleteLast
//    Output        :  void
//    Description   :  Delete element from last Position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::DoublyCL<T>::DeleteLast()
{
    if (first == NULL || last == NULL)
    {
        return;
    }

    if (first == last)
    {
        delete first;
    }
    else
    {
        last = last->prev;
        delete first->prev;
    }

    first->prev = last;
    last->next = first;

    iCount--;
}

////////////////////////////////////////////////////////////
//
//    Function name :  DeleteLast
//    Output        :  void
//    Description   :  Delete element from last Position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::DoublyCL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    Node *temp = NULL;

    if (iPos < 1 || iPos > iCount)
    {
        cout << "Invalid Position" << endl;
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for (i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        first->prev = last;
        last->next = first;

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
template <class T>
bool DataStructures ::DoublyCL<T>::Search(T key)
{
    Node *temp = first;

    if (first == NULL || last == NULL)
    {
        cout << "Nothing to search";
        return false;
    }

    do
    {
        if (temp->data == key)
        {
            return true;
        }

        temp = temp->next;
    } while (temp != first);

    return false;
}

///////////////////////////////////////////////////////////////////////////////////////
// --------------------- Doubly Circular Linked list functions definions end --------
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
// --------------------- STACK functions definions start --------
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
DataStructures ::Stack<T>::Stack()
{
    top = NULL;
    iCount = 0;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Display
//    Output        :  void
//    Description   :  Dislay all the elements from the Stack
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::Stack<T>::Display()
{
    Node *temp = top;

    while (temp != NULL)
    {
        cout << " | " << temp->data << " | " << endl;
        temp = temp->next;
    }
}

////////////////////////////////////////////////////////////
//
//    Function name :  Count
//    Output        :  int
//    Description   :  Count the number of nodes from the stack
//
////////////////////////////////////////////////////////////
template <class T>
int DataStructures ::Stack<T>::Count()
{
    return iCount;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Push
//    Input         :  T
//    Output        :  void
//    Description   :  Insert element at the top position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::Stack<T>::Push(T no)
{
    Node *newn = NULL;

    newn = new Node;

    newn->data = no;
    newn->next = NULL;

    if (top == NULL)
    {
        top = newn;
    }
    else
    {
        newn->next = top;
        top = newn;
    }

    iCount++;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Pop
//    Output        :  int
//    Description   :  Delete element from the top position
//
////////////////////////////////////////////////////////////
template <class T>
T DataStructures ::Stack<T>::Pop()
{
    Node *temp = NULL;
    T iValue;

    if (top == NULL)
    {
        cout << "Stack is empty";
        return -1;
    }

    temp = top;

    iValue = top->data;

    top = top->next;
    delete temp;

    iCount--;

    return iValue;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Pop
//    Output        :  T
//    Description   :  Return the top element
//
////////////////////////////////////////////////////////////
template <class T>
T DataStructures ::Stack<T>::Peek()
{
    return top->data;
}

///////////////////////////////////////////////////////////////////////////////////////
// --------------------- QUEUE functions definions start ----------------------------
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
DataStructures ::Queue<T>::Queue()
{
    front = NULL;
    iCount = 0;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Display
//    Output        :  void
//    Description   :  Dislay all the elements from the Queue
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::Queue<T>::Display()
{
    Node *temp = front;

    while (temp != NULL)
    {
        cout << " | " << temp->data << " | " << endl;
        temp = temp->next;
    }
}

////////////////////////////////////////////////////////////
//
//    Function name :  Count
//    Output        :  int
//    Description   :  Count the number of nodes from the Queue
//
////////////////////////////////////////////////////////////
template <class T>
int DataStructures ::Queue<T>::Count()
{
    return iCount;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Enqueue
//    Input         :  T
//    Output        :  void
//    Description   :  Insert element at the front position
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::Queue<T>::Enqueue(T no)
{
    Node *newn = NULL;

    newn = new Node;

    newn->data = no;
    newn->next = NULL;

    if (front == NULL)
    {
        front = newn;
    }
    else
    {
        newn->next = front;
        front = newn;
    }

    iCount++;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Deque
//    Output        :  int
//    Description   :  Delete element from the last position
//
////////////////////////////////////////////////////////////
template <class T>
T DataStructures ::Queue<T>::Deque()
{
    Node *temp = NULL;
    T iValue;

    if (front == NULL)
    {
        cout << "Queue is empty";
        return -1;
    }

    temp = front;

    while (temp->next->next)
    {
        temp = temp->next;
    }

    iValue = temp->next->data;

    delete temp->next;
    temp->next = NULL;

    iCount--;

    return iValue;
}

///////////////////////////////////////////////////////////////////////////////////////
// --------------------- QUEUE functions definions end -----------------------------
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
// --------------------- BST functions definions start -----------------------------
///////////////////////////////////////////////////////////////////////////////////////

template <class T>
DataStructures ::BST<T>::BST()
{
    root = NULL;
    iCount = 0;
}


////////////////////////////////////////////////////////////
//
//    Function name :  Inorder
//    Output        :  void
//    Description   :  calls to Inorder helper function
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: BST<T> :: Inorder()
{
    Inorder(root);

    cout << endl;
}


///////////////////////////////////////////////////////////
//
//    Function name :  Inorder
//    Input         :  root
//    Output        :  void
//    Description   :  print the elements in the Inorder traversal
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: BST<T> :: Inorder(Node *temp)
{
    if(temp == NULL)
    {
        return;
    }

    Inorder(temp->lChild);      //L
    cout << temp->data << " ";  //D
    Inorder(temp->rChild);      //R
}


////////////////////////////////////////////////////////////
//
//    Function name :  Preorder
//    Output        :  void
//    Description   :  calls to Preorder helper function
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: BST<T> :: Preorder()
{
    Preorder(root);

    cout << endl;
}


///////////////////////////////////////////////////////////
//
//    Function name :  Preorder
//    Input         :  root
//    Output        :  void
//    Description   :  print the elements in the preorder traversal
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: BST<T> :: Preorder(Node *temp)
{
    if(temp == NULL)
    {
        return;
    }

    cout << temp->data << " ";   //D
    Preorder(temp->lChild);      //L
    Preorder(temp->rChild);      //R
}


////////////////////////////////////////////////////////////
//
//    Function name :  Postorder
//    Output        :  void
//    Description   :  calls to Postorder helper function
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: BST<T> :: Postorder()
{
    Postorder(root);

    cout << endl;
}


///////////////////////////////////////////////////////////
//
//    Function name :  Postorder
//    Input         :  root
//    Output        :  void
//    Description   :  print the elements in the Postorder traversal
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures :: BST<T> :: Postorder(Node *temp)
{
    if(temp == NULL)
    {
        return;
    }

    Postorder(temp->lChild);      //L
    Postorder(temp->rChild);      //R
    cout << temp->data << " ";   //D
}

////////////////////////////////////////////////////////////
//
//    Function name :  Count
//    Output        :  int
//    Description   :  Count number of nodes
//
////////////////////////////////////////////////////////////
template <class T>
int DataStructures :: BST<T> :: Count()
{
    return iCount;
}

////////////////////////////////////////////////////////////
//
//    Function name :  Insert
//    Input         :  T
//    Output        :  void
//    Description   :  Insert Element in the BST
//
////////////////////////////////////////////////////////////
template <class T>
void DataStructures ::BST<T>::Insert(T no)
{
    Node *newn = NULL;
    Node *temp = NULL;

    newn = new Node;
    newn->data = no;
    newn->lChild = NULL;
    newn->rChild = NULL;

    if (root == NULL)
    {
        root = newn;
        iCount++;
    }
    else
    {
        temp = root;

        while (1)
        {
            if (no < temp->data)
            {
                if (temp->lChild == NULL)
                {
                    temp->lChild = newn;
                    iCount++;
                    break;
                }
                temp = temp->lChild;
            }
            else if (no > temp->data)
            {
                if (temp->rChild == NULL)
                {
                    temp->rChild = newn;
                    iCount++;
                    break;
                }
                temp = temp->rChild;
            }
            else if (no == temp->data)
            {
                cout << "Unable to insert as element is duplicate..!";
                delete newn;
                break;
            }
        }
    }
}

////////////////////////////////////////////////////////////
//
//    Function name :  Search
//    Input         :  T
//    Output        :  bool
//    Description   :  Search a element in the BST
//
////////////////////////////////////////////////////////////
template<class T>
bool DataStructures :: BST<T> :: Search(T key)
{
    Node *temp = NULL;

    temp = root;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        else if(key < temp->data)
        {
            temp = temp->lChild;
        }
        else
        {
            temp = temp->rChild;
        }
    }
    return false;
}


///////////////////////////////////////////////////////////////////////////////////////
// --------------------- BST functions definions end -----------------------------
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
// ---------------- Searching Algorithms functions definions Start --------------
///////////////////////////////////////////////////////////////////////////////////////

template<class T>
DataStructures :: Searching<T> :: Searching(int iSize)
{
    this->iSize = iSize;
    Arr = new T[iSize];
}

////////////////////////////////////////////////////////////
//
//    Function name :  Accept
//    Output        :  void
//    Description   :  Accept elements and store into the Array
//
////////////////////////////////////////////////////////////
template<class T>
void DataStructures :: Searching<T> :: Accept()
{
    cout << "Enter " << iSize << " elements :" << endl;

    for(int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

////////////////////////////////////////////////////////////
//
//    Function name :  Display
//    Output        :  void
//    Description   :  Display the elements from the Array.
//
////////////////////////////////////////////////////////////
template<class T>
void DataStructures :: Searching<T> :: Display()
{
    cout << "Array Elements are : " << endl;
    
    for(int i = 0; i < iSize; i++)
    {
        cout << Arr[i] << "\t";
    }

    cout << endl;
}

////////////////////////////////////////////////////////////
//
//    Function name :  LinearSearch
//    Input         :  T
//    Output        :  int
//    Description   :  Search the element, if found return index 
//                     otherwise return -1
//
////////////////////////////////////////////////////////////
template<class T>
int DataStructures :: Searching<T> :: LinearSearch(T key)
{
    for(int i = 0; i < iSize; i++)
    {
        if(Arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

///////////////////////////////////////////////////////////////////////////////////////
// ---------------- Searching Algorithms functions definions end --------------
///////////////////////////////////////////////////////////////////////////////////////

