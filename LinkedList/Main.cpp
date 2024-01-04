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
void insertAtHead(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
	if(head == NULL) head=tail=newNode;
	else {
		newNode -> next = head;
		head = newNode;
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
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    print(head);
    cout<<tail->data<<endl;
    return 0;
}
