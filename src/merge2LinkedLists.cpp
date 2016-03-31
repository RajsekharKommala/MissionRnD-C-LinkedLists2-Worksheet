/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <stdlib.h>
struct node {
	int num;
	struct node *next;
};

struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	if (head1 == NULL && head2 == NULL)
		return NULL;
	else
	{
		struct node *output,*newnode,*temp;
		int i = 0;
		output = (struct node*)malloc(sizeof(struct node));

		if (head1 == NULL)
		{
			return head2;
		}
		else
			if (head2 == NULL)
			{
				return head1;
			}

		while (head1 != NULL || head2 != NULL)
		{
			if (head1 == NULL || head2 == NULL)
			{
				if (head1 == NULL)
				{
					newnode = (struct node*)malloc(sizeof(struct node));
					newnode->num = head2->num;
					newnode->next = NULL;
					head2 = head2->next;
					if (i == 0)
					{
						 temp = newnode;
						output = temp;
						i = 1;
					}
					else
					{
						temp->next = newnode;
						temp = temp->next;
					}

				}
				else
					if (head2 == NULL)
					{
						newnode = (struct node*)malloc(sizeof(struct node));
						newnode->num = head1->num;
						newnode->next = NULL;
						head1 = head1->next;
						if (i == 0)
						{
							temp = newnode;
							output = temp;
							i = 1;
						}
						else
						{
							temp->next = newnode;
							temp = newnode;
						}
					}
			}
			else
			{
				if (head1->num < head2->num)
				{
					newnode = (struct node*)malloc(sizeof(struct node));
					newnode->num = head1->num;
					newnode->next = NULL;
					head1 = head1->next;
					if (i == 0)
					{
						temp = newnode;
						output = temp;
						i = 1;
					}
					else
					{
						temp->next = newnode;
						temp = newnode;
					}
				}
				else
				{
					newnode = (struct node*)malloc(sizeof(struct node));
					newnode->num = head2->num;
					newnode->next = NULL;
					head2 = head2->next;
					if (i == 0)
					{
						temp = newnode;
						output = temp;
						i = 1;
					}
					else
					{
						temp->next = newnode;
						temp = temp->next;
					}

				}

			}
		}
		return output;
	}
	return NULL;
}
