#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
 
};

void InsertatHead(Node* &head,int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertatTail(Node* &tail,int d){
    //new node create
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp; 

}
void print(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    Node * node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    //cout<<node1<<endl;
    //head pointed to node1
    Node *head=node1;
    //print(head);
    //cout<<head->data<<endl;
    //cout<<"head"<<head<<endl;
    InsertatHead(head,12);
    InsertatHead(head,11);
    print(head);

    //InsertatHead(head,12);
    //print(head);

    Node *tail=node1;
    //cout<<"tail"<<tail<<endl;
    InsertatTail(tail,12);
    //print(head);
    InsertatTail(tail,15);
    print(head);   
    //cout<<"tail : "<<tail;
}
