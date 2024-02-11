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

	~Node(){
		if(this->next !=NULL){
			delete next;
			this->next = NULL;
		}
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

void insertAtHead(Node* &head, Node* &tail, int data){

	if(head == NULL){
		Node* temp = new Node(data);
		head = temp;
		tail = temp;
	}else{
		Node* temp = new Node(data);
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
}

void insertAtTail(Node* &head, Node* &tail, int data){

	if(tail == NULL){
		Node* temp = new Node(data);
		head = temp;
		tail = temp;
	}else{
		Node* temp = new Node(data);
		temp->prev = tail;
		tail->next = temp;
		tail = temp;
	}
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){

	if(position == 1){
		insertAtHead(head, tail, data);
		return;
	}

	Node* temp = head;
	int cnt = 1;
	while (cnt < position-1){
		temp = temp->next;
		cnt++;
	}

	if(temp->next == NULL){
		insertAtTail(head, tail, data);
		return;
	}

	Node* tempNode = new Node(data);
	tempNode->prev = temp;
	temp->next->prev = tempNode;
	tempNode->next = temp->next;
	temp->next = tempNode;
}

void deleteNode(Node* &head, int position){

	if(position == 1){
		Node* temp = head;
		temp->next->prev = NULL;
		head = temp->next;
		temp->next = NULL;
		delete temp;
	}else{

		Node* curr = head;
		Node* prev = NULL;
		int cnt = 1;

		while (cnt < position){
			prev = curr;
			curr = curr->next;
			cnt++;
		}

		if(curr->next==NULL){
			tail = prev;
		}

		prev->next = curr->next;
		curr->next = NULL;
		curr->prev = NULL;
		delete curr;
	}
}

int main() {
  // Node* n1 = new Node(10);
  // Node* head = n1;
	// Node* tail = n1;

	Node* head = NULL;
	Node* tail = NULL;
  // print(head);

	cout << "n1 length is :- " << getLength(head) << endl;

	insertAtHead(head, tail, 20);
	print(head);

	insertAtTail(head, tail, 6);
	print(head);

	insertAtPosition(head, tail, 1, 30);
	insertAtPosition(head, tail, 3, 9);
	insertAtPosition(head, tail, 5, 7);
	print(head);

	deleteNode(head, 5);
	print(head);

  return 0;
}