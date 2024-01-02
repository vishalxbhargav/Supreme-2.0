#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(){
		next=NULL;
	}
	Node(int data){this->data=data;next=NULL;}
};
void print(Node* n){
	Node* temp=n;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
Node* midNodeOfLL(Node* n){
	Node* fast=n;
	Node* slow=n;
	while(fast->next!=NULL&&fast!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow->next;
}
Node* reverse(Node* head){
    if(head->next==NULL) return head;
    Node* cur=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return cur;
}
bool isPalindromLL(Node* n){
	Node* first=n;
	Node* second=midNodeOfLL(n);
	cout<<"get second LL--"<<second->data<<endl;

	while(second!=NULL){
		if(first->data!=second->data) return false;
		cout<<first->data<<"---"<<second->data<<endl;
		first=first->next;
		second=second->next;
	}
	return true;
}
int main(){
	cout<<"Palindromic Linked List"<<endl;
	Node* head=new Node(30);
	Node* sec=new Node(20);
	Node* third=new Node(10);
	Node* four=new Node(10);
	Node* five=new Node(20);
	Node* six=new Node(30);
	head->next=sec;
	sec->next=third;
	third->next=four;
	four->next=five;
	five->next=six;
	// cout<<head->data<<endl;
	print(reverse(head));
	// Node* tem=midNodeOfLL(head);
	if(isPalindromLL(head)) cout<<"LL is Palindromic"<<endl;
	else cout<<"LL is not Palindromic"<<endl;
	// cout<<isPalindromLL(head);
	return 0;
}