#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"KindredSpirits.h"

int s = 0;

int countNode(struct node *b) // Helper Function
{
	int cnt = 1;

	if (b->left != NULL)
	{
		cnt += countNode(b->left);
	}
	if (b->right != NULL)
	{
		cnt += countNode(b->right);
	}

	return cnt;
}

void inorder(struct node *root,int a[]) // Helper Function
{
	if (root != NULL)
	{
		inorder(root->left, a);
		a[s++] = root->data;
		inorder(root->right, a);
	}
	return ;
}

 void postorder(struct node *root,int a[]) // Helper Function
{
	if (root != NULL)
	{
		postorder(root->left, a);
		postorder(root->right, a);
		a[s++] = root->data;
	}
	return;
}

void preorder(struct node *root, int a[]) // Helper Function
{
	if (root != NULL)
	{
		a[s++] = root->data;
		preorder(root->left, a);
		preorder(root->right, a);
	}
	return;
}

int isReflection(node *a, node *b)
{
	if (a == NULL && b == NULL)
	{
		return 1;
	}
	else if (a == NULL || b == NULL)
	{
		return 0;
	}

	int n1, n2;
	
	n1 = countNode(a);
	n2 = countNode(b);

	if (n1 != n2)
	{
		return 0;
	}

	int *a1, *a2;

	a1 = (int *)malloc(sizeof(int));
	a2 = (int *)malloc(sizeof(int));

	inorder(a, a1);
	s = 0;
	inorder(b, a2);
	s = 0;

	for (int i = 0; i < n1; i++, n2--)
	{
		if (a1[i] != a2[n2 - 1])
		{
			return 0;
		}
	}

	return 1;
}

node *makeReflection(node *root)
{
	if (root == NULL)
	{
		return NULL;
	}
	else
	{
		struct node *temp = (node*)malloc(sizeof(node));

		temp->data = root->data;
		temp->left = makeReflection(root->right);
		temp->right = makeReflection(root->left);

		return temp;
	}
}

int kindredSpirits(node *a, node *b)
{
	if (a == NULL && b == NULL)
	{
		return 1;
	}
	else if (a == NULL || b == NULL)
	{
		return 0;
	}

	int n1, n2;

	n1 = countNode(a);
	n2 = countNode(b);

	if (n1 != n2)
	{
		return 0;
	}

	int *a1, *a2;

	a1 = (int *)malloc(sizeof(int)* 5);
	a2 = (int *)malloc(sizeof(int)* 5);

	preorder(a, a1);
	s = 0;
	postorder(b, a2);
	s = 0;
	
	int i;
	for (i = 0; i < n1; i++, n2--)
	{
		if (a1[i] != a2[i])
		{
			break;
		}
	}

	if (i == n1)
	{
		return 1;
	}

	preorder(b, a2);
	s = 0;
	postorder(a, a1);
	s = 0;

	for (i = 0; i < n1; i++, n2--)
	{
		if (a1[i] != a2[i])
		{
			return 0;
		}
	}

	return 1;
}

double difficultyRating(void)
{
	return 4.75;
}

double hoursSpent(void)
{
	return 100;
}
