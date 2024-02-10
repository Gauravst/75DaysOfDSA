#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* prev;
  Node* next;

  Node(int data) {
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }
};

void print(Node*& head) {
  Node* temp = head;

  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int getLength(Node*& head) {
  Node* temp = head;
  int cnt = 0;

  while(temp != NULL) {
    cnt++;
    temp = temp->next;
  }

	return cnt;
}

void insertAtHead(Node* &head, int data){
	Node* temp = new Node(data);
	temp->next = head;
	head->prev = temp;
	head = temp;
}

void insertAtTail(Node* &tail, int data){
	Node* temp = new Node(data);
	temp->prev = tail;
	tail->next = temp;
	tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){

	if(position == 1){
		insertAtHead(head, data);
		return;
	}

	Node* temp = head;
	int cnt = 1;
	while (cnt < position-1){
		temp = temp->next;
		cnt++;
	}

	if(temp->next == NULL){
		insertAtTail(tail, data);
		return;
	}

	Node* tempNode = new Node(data);
	tempNode->prev = temp;
	temp->next->prev = tempNode;
	tempNode->next = temp->next;
	temp->next = tempNode;
}

int main() {
  Node* n1 = new Node(10);
  Node* head = n1;
	Node* tail = n1;
  print(head);

	cout << "n1 length is :- " << getLength(head) << endl;

	insertAtHead(head, 20);
	print(head);

	insertAtTail(tail, 6);
	print(head);

	insertAtPosition(head, tail, 1, 30);
	insertAtPosition(head, tail, 4, 9);
	insertAtPosition(head, tail, 6, 7);
	print(head);

  return 0;
}