
#include<iostream>
using namespace std;

class Node{
	private:
		int Data;
		Node *Next;
	public:
		void insert(int x);
		void print();
};
Node *Head;
void Node::insert(int x)
{
	Node *temp = new Node();
	temp->Data = x;
	temp->Next = Head;
	Head = temp;
}

void Node::print()
{
	Node *temp = Head;
	cout<<"List is: ";
	while(temp != NULL)
	{
		cout<<temp->Data<<" ";
		temp = temp->Next;
	}
	cout<<"\n\n";
}

main()
{
	Node list;
	Head = NULL;
	int size, number;
	cout<<"What is the size of list: ";
	cin>>size;
	for(int i = 1; i<=size; i++)
	{
		cout<<"\nEnter Number: ";
		cin>>number;
		list.insert(number);
		list.print();
	}
	
};

