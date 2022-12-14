// CLASS: .cpp
//
// Author: Rhushabh Patel, 7833416
//
// REMARKS: ...
//
//-----------------------------------------

#include "Queue.h"
#include "Node.h"

Queue::Queue() :front(nullptr), back(nullptr), size(0) {}
int Queue::getSize(){ return size; }
bool Queue::isEmpty(){ return size == 0; }


// add item to front of queue.
void Queue::enqueue(ListItem *item){
        // special case: adding to empty queue
        if(front == nullptr){
                front = new Node(item, nullptr);
                back = front;
        } else {
                back->setNext(new Node(item, nullptr));
                back = back->getNext();
        }
        size++;
}// enqueue

// remove front item from Queue.
ListItem *Queue::dequeue(){
        ListItem *theItem = nullptr;
        Node *theNode = front;
        if(front != nullptr){
                theItem = front->getItem();
                // special case: removing last item
                if(front == back){
                        front = back = nullptr;
                } else {
                        front = front->getNext();
                }
                size--;
                delete(theNode);
        }
        return theItem;
}// dequeue


// look at first item in queue without removing. 
ListItem *Queue::getFront(){
        ListItem *theItem = nullptr;
        if(front != nullptr){
                theItem = front->getItem();
        }
        return theItem;
}// getFront

// destructor
Queue::~Queue() {} 
