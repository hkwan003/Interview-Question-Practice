#include <iostream>

using namespace std;

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

void IntList:reverse()
{
    if(head != 0)
    {
        IntNode *temp1 = head;
        IntNode *temp2 = tail;
        IntNode *temp3 = 0;
        


int main()
{
    IntList stuff;
    stuff.push_front(12);
    stuff.push_front(34);
    stuff.push_back(67);
    stuff.push_back(68);
    stuff.push_back(69);
    stuff.display();
    stuff.findMiddle();

}
