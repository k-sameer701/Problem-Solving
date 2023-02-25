/*
Circular Linked List Traversal

https://practice.geeksforgeeks.org/problems/circular-linked-list-traversal/1?page=8&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void printList(struct Node *head)
{
  // code here
  struct Node *ptr = head;
  printf("%d ", ptr->data);
  ptr = ptr->next;
  while(ptr != head){
      printf("%d ", ptr->data);
      ptr=ptr->next;
  }
}

int main()
{
    return 0;
}