#pragma once
#include<iostream>
using namespace std;

struct Node
{
	 int value;
	 Node *next;
};

//Node CreateSigleLinckedList()
//{
//	 Node node1, node2, node3, node4, node5;
//	 node1.value = 3;
//	 node1.next = &node2;
//	 node2.value = 1;
//	 node2.next = &node3;
//	 node3.value = 11;
//	 node3.next = &node4;
//	 node4.value = 2;
//	 node4.next = &node5;
//	 node5.value = 12;
//	 node5.next = NULL;
//
//	 return node1;
//}
Node * ReturnSortList(Node *head)
{
	 int save = 0;

	 for (Node *index1 = head;index1 != NULL;index1=index1->next)
	 {
		  for (Node *index2 = index1->next;index2 != NULL;index2= index2->next)
		  {
				if (index1->value < index2->value)
				{
					 save = index1->value;
					 index1->value = index2->value;
					 index2->value = save;
				}
		  }
	 }
	 return  head;
}

Node *RevertList(Node *head)
{
	 Node *current = head;
	 Node *next;
	 Node *prev = NULL;

	 while (current->next != NULL)
	 {
		 next = current->next;
		 current->next = prev;
		 prev = current;
		 current = next;
	 }
	 current->next = prev;

	 head = current;
	 return head;
}