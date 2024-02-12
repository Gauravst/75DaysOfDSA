#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void insertAsCircular(Node*& head, Node*& tail, int data) {
  if(tail == NULL) {
    Node* temp = new Node(data);
    temp->next = temp;
    tail = temp;
    head = temp;
    return;
  }

  Node* temp = new Node(data);
  temp->next = head;
  tail->next = temp;
  head = temp;
}

void insertAsSingly(Node*& head, Node*& tail, int data) {
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;

  if(tail == NULL) {
    tail = head;
  }
}

void printCircular(Node*& tail) {
  if(tail == NULL) {
    cout << "List is empty" << endl;
    return;
  }

  Node* temp = tail;
  do {
    cout << temp->next->data << " ";
    temp = temp->next;
  } while(temp != tail);

  cout << endl;
}

void printSingly(Node*& head) {

	if(head == NULL){
		cout << "List is empty" << endl;
		return;
	}

  Node* temp = head;
  while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
  }
	cout << endl;
}

bool checkCircular(Node* &head){

	if(head == NULL){
		return true;
	}

	if(head->next == NULL){
		return false;
	}

	Node* temp = head;
	while (temp->next != NULL){
		if(temp->next = head){
			return true;
		}
		temp = temp->next;
	}
	return false;
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  // printCircular(tail);
  // insertAsCircular(head, tail, 10);
  // insertAsCircular(head, tail, 20);
  // insertAsCircular(head, tail, 30);
  // printCircular(tail);

  printSingly(head);
  insertAsSingly(head, tail, 1);
  insertAsSingly(head, tail, 2);
  insertAsSingly(head, tail, 3);
  printSingly(head);

	if(checkCircular(head)){
		cout << "List is Circular" << endl;
	}else{
		cout << "List not circular" << endl;
	}
  return 0;
}