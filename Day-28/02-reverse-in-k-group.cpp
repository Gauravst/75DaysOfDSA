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

void insertNode(Node*& head, int data) {
  if(head == NULL) {
    Node* temp = new Node(data);
    head = temp;
  } else {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
  }
}

void print(Node* head) {
  if(head == NULL) {
    cout << "List is empty" << endl;
    return;
  }

  while(head != NULL) {
		cout << head->data << " ";
		head = head->next;
  }
	cout << endl;
}

Node* reverseInK(Node* head, int k){

	if(head == NULL){
		return NULL;
	}

	Node* prev = NULL;
	Node* curr = head;
	Node* next = NULL;
	int count  = 0;

	while (count < k && curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		count++;
	}
	
	if(next != NULL){
		head -> next = reverseInK(next, k);
	}
	return prev;
}

int main() {

	Node* head = NULL;
	print(head);

	insertNode(head, 10);
	insertNode(head, 20);
	insertNode(head, 30);
	insertNode(head, 40);
	print(head);

	int k = 2;
	head = reverseInK(head, k);
	print(head);

	return 0;
}