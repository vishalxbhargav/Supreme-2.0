#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node() {
            this->data = 0;
            this->next = NULL;
    }
    Node(int data) {
            this->data = data;
            this->next = NULL;
    }
};
int lenght(Node* n){
    int cnt=0;
    while(n!=NULL){ n=n->next;cnt++;}
    return cnt;
}
void addFirst(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
	if(head == NULL) head=tail=newNode;
	else {
		newNode -> next = head;
		head = newNode;
	}
}
void addLast(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
	if(tail == NULL) head=tail=newNode;
    else{
        Node* temp=head;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=newNode;
    }
}
void addAtPossition(Node* &head,Node* &tail,int data,int pos){
    int len=lenght(head);
    if(pos<=len+1&&pos>0){
        if(pos==1) addFirst(head,tail,data);
        else if(pos==len+1) addLast(head,tail,data);
        else{
            Node* temp=head;
            Node* newNode=new Node(data);
            for(int i=1;i<pos-1;i++){
                temp=temp->next;
            }
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }else{
        cout<<"Unable to aad this  Possition"<<endl;
    }
}

void print(Node* head) {
	Node* temp = head;
	while(temp != NULL) {
			cout << temp->data << "->";
			temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
int main() {
    cout<<"LinkedList Created"<<endl;
    Node* head = NULL;
    Node* tail = NULL;
    addFirst(head,tail,100);
    addFirst(head,tail,90);
    addFirst(head,tail,80);
    addFirst(head,tail,60);
    addFirst(head,tail,50);
    addFirst(head,tail,40);
    addFirst(head,tail,30);
    addFirst(head,tail,20);
    addFirst(head,tail,10);
    addLast(head,tail,110);
    addLast(head,tail,120);
    cout<<"Length : "<<lenght(head)<<endl; 

    print(head);
    addAtPossition(head,tail,70,7);
    print(head);
    cout<<tail->data<<endl;
    return 0;
}
