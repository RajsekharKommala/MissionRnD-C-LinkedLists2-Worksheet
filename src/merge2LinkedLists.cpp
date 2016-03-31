/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	node *mergedList, *output;
	if (head1 == NULL && head2 == NULL)
		return NULL;
	if (head1==NULL)
	return head1;
	if (head2 == NULL)
		return head2;
	if (head1->num < head2->num)
	{
		mergedList = head1;
		output = mergedList;
		head1 = head1->next;
	}
	else{
		mergedList = head2;
		output = mergedList;
		head2 = head2->next;
	}
	while (head1 != NULL && head2 != NULL)
	{
		if (head1->num < head2->num)
		{
			mergedList->next = head1;
			mergedList = mergedList->next;
			head1 = head1->next;
		}
		else
		{
			mergedList->next = head2;
			mergedList = mergedList->next;
			head2 = head2->next;
		}
		if (head1 = NULL)
		{
			mergedList->next = head2;
		}
		else
		{
			mergedList->next = head1;
		}
		return output;
	}
}
