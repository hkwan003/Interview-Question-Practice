#include "linkedlist.h"
#include <iostream>

using namespace std;

IntNode* reverse(IntNode *head)
{
    IntNode *temp = head;
    if(temp -> next != 0)
    {
        cout << "data: " << head -> data << endl;
        temp = temp -> next;
        IntNode *temp1 =  reverse(temp);
        cout << "after: " << head -> data << endl;
        temp1 -> next = head;
        cout << "after assignment: " << temp1 -> data << endl;
        return head;
    }
    else
    {
        return temp;
    }

}

int main()
{
  IntNode n(5);
  IntNode n1(2);
  IntNode n2(3);
  IntNode n3(4);
  n.next = &n1;
  n1.next = &n2;
  n2.next = &n3;
  reverse(&n);
  cout << "after reverse: " << n3.next->data << endl;
  IntNode *head = &n;
 // while(head != 0)
  //    {
  //        cout << head->data << endl;
   //       head = head -> next;
    //  }
  return 0;
}
