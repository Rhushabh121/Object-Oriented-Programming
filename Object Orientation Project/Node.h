// CLASS: Node.h
//
// Author: Rhushabh Patel, 7833416
//
// REMARKS: ...
//
//-----------------------------------------
#pragma once

class ListItem;

/**** Node interface */
class Node {
private:
        ListItem *item;
        Node *next;
public:
        Node();
        Node(ListItem *i, Node *n);
        Node *getNext();
        void setNext(Node *next);
        ListItem *getItem();
        void setItem(ListItem *i);
        void print();
}; // class Node
