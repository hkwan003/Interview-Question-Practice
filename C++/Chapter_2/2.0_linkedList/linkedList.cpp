#include <iostream>

using namespace std;

#include <stack>
#include "linkedList.h"

IntList::IntList()
: head(0), tail(0)
{}


void IntList::push_front(int value)
{
    if(head == 0)
    {
        IntNode *temp = new IntNode(value);
        head = temp;
        tail = temp;
    }
    else
    {
        IntNode *temp = new IntNode(value);
        temp -> next = head;
        head = temp;
    }
}

void IntList::push_back(int value)
{
    if(head == 0)
    {
        push_front(value);
    }
    else
    {
        IntNode *temp = new IntNode(value);
        tail -> next = temp;
        tail = temp;
    }
}

void IntList::display() const
{
    for(IntNode *temp = head; temp != 0; temp = temp -> next)
    {
        if(temp -> next != 0)
        {
            cout << temp -> data << " ";
        }
        else
        {
            cout << temp -> data;
        }
    }
    cout << endl;
}

void IntList::remove(int value) 
{
    IntNode *prev, *after;
    if(head -> data == value)
    {
        IntNode* temp1 = head -> next;
        delete head;
        head = temp1;
        return;
    }
    for(IntNode *temp = head -> next; temp != 0; temp = temp -> next)
    {
        //cout << "temp data: " << temp -> data << endl;
        if(temp -> data == value)
        {
            //cout << "should go in only once" << endl;
            after = temp -> next;
            delete temp;
            prev -> next = after;
        }
        prev = temp;
    }


}


void IntList::findMiddle()
{
    if(head != 0)
    {
        IntNode *holder = head;
        int counter = 0;
        for(IntNode *temp = head; temp != 0; temp = temp -> next)
        {
            counter++;
            cout << "counter: " << counter << endl;
            if(counter % 2 == 0)
            {
                cout << "incrementing" << endl;
                holder = holder -> next;
            }
        }
        cout << "output linked List middle: " << holder -> data << endl;
    }

}
void IntList::reverse()
{
    stack<int> linked_list_stack;
    IntNode *temp = head;
    while(temp != 0)
    {
        linked_list_stack.push(temp -> data);
        temp = temp -> next;
    }
    while(!linked_list_stack.empty())
    {
        cout << linked_list_stack.top() << " ";
        linked_list_stack.pop();
    }

}
int main()
{
    IntList stuff;
    stuff.push_front(12);
    stuff.push_front(34);
    stuff.push_back(67);
    stuff.push_back(68);
    stuff.push_back(69);
    stuff.push_back(534);
    stuff.push_back(32);
    cout << endl << endl;
    stuff.reverse();
    cout << endl;
    stuff.display();
    stuff.remove(34);
    stuff.display();
    stuff.remove(68);
    stuff.display();
    stuff.remove(32);
    stuff.display();
    stuff.findMiddle();

}
