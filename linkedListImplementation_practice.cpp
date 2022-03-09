#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void insertatHead(Node** p, int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->next = *p;
	*p = temp;
}

void insertafterNode(Node* prev_node,  int x)
{
	if(prev_node == NULL)
	{
		cout << "Previous Node cannot be NULL! ";
		return;
	}
	else if(prev_node->next == NULL)
	{
		Node* new_node = new Node();
		new_node->data = x;
		new_node->next = prev_node->next;
		prev_node->next = new_node;
	}
}

void deleteHead()
{

}

void deleteafterNode()
{

}

void display(Node* p)
{
	while(p)
	{
		cout << p->data << " ";
		p = p->next;
	}
}

int main()
{
	Node* first = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();
	Node* fifth = new Node();
	Node* p = first;

	first->data = 10;
	first->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = fourth;
	fourth->data = 40;
	fourth->next = fifth;
	fifth->data = 50;
	fifth->next = NULL;


	insertatHead (&p, 01);
	insertafterNode(fifth, 60);
	display(p);

	return 0;
}
