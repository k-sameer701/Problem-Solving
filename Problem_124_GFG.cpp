/*

Print Linked List elements

https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1?page=7&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void display(Node *head)
{
    // your code goes here
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    return 0;
}