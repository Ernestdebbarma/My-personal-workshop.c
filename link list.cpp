#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};
struct node* head;
struct node* getnewnode(int num)
{
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data=num;
	temp->next=NULL;
	return temp;
}
struct node* insert(int num)
{
	struct node* ptr;
	ptr = getnewnode(num);
    ptr->next=head;
    head=ptr;
	return head;
} 

int main()
{
	int kok = 0;
	cout<<"how much nodes? ";
	cin>>kok;
	for (int i = 0; i < kok; ++i)
	{
		int num=0;
       cout<<"give data-> ";
       cin>>num;
       head = insert(num);
	}
    
	for (struct node* temp = head; temp!=NULL; temp=temp->next)
	{
		cout<<" "<<temp->data;
	}

	return 0;
}
