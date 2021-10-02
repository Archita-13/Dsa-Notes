#include<iostream>
using namespace std;
struct node{
    int val;
    struct node *next;
};
node *head=NULL;

void create();
void display();
void deleteList();

int main(){
    int choice;
    cout<<"1.Create a node\n2.display\n3.Delete the List\n4.Exit\n";
    do{
    cout<<"Enter choice\n";
	cin>>choice;
    switch(choice){
        case 1: create();
        break;
        case 2: display();
        break;
        case 3: deleteList();
        break;
        case 4: break;
        default: cout<<"Choose a valid option\n";
    }
  }while(choice!=4);
}

void create(){
    if(head==NULL){
        head=new node;
        cout<<"Enter value : ";
        cin>>head->val;
        head->next=NULL;
    }
    else{
        node *p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        node *q=new node;
        cout<<"Enter value : ";
        cin>>q->val;
        q->next=NULL;
        p->next=q;

    }
}

void display(){
	node *p=head;
	while(p!=NULL){
		cout<<p->val<<" ";
		p=p->next;
	}
	cout<<endl;
}
void deleteList(){
    while(head!=NULL){
    	node *p=head;
    	node *q=p->next;
    	head=q;
    	delete(p);
    }
}