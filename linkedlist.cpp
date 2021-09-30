#include <iostream>
using namespace std;
struct node
{
	int value;
	struct node *next;
};
node *start = NULL;

void create();
void display();
int main()
{
	cout << "MENU\n1. Create Node\n2. Display Node\n3.Exit\n";
	int choice;
	do
	{
		cout << "\nEnter choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			break;
		default:
			cout << "Enter a suitable choice\n";
		}

	} while (choice != 3);
}

void create()
{
	//make start
	if (start == NULL)
	{
		start = new node;
		cout << "Enter value : ";
		cin >> start->value;
		start->next = NULL;
	}
	else
	{
		node *p = start;
		while (p->next != NULL)
		{
			p = p->next;
		}
		node *q = new node;
		cout << "Enter value : ";
		cin >> q->value;
		q->next = NULL;
		//point p to q
		p->next = q;
	}
}

void display()
{
	node *ptr = start;
	while (ptr != NULL)
	{
		cout << ptr->value << " ";
		ptr = ptr->next;
	}
}