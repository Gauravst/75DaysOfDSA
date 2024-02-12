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

void insertNodeAtHead(Node*& head, int data) {
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;
}

void print(Node* head) {
  Node* temp = head;

  if(temp == NULL) {
    cout << "List is empty." << endl;
    return;
  }
  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void reverseList(Node*& head) {
  if(head == NULL || head->next == NULL) {
    return;
  }

  Node* curr = head;
  Node* prev = NULL;
  Node* point = curr;

  while(curr != NULL) {
    point = curr->next;
    curr->next = prev;
    prev = curr;
    curr = point;
  }
  head = prev;
}

Node* reverseListRecursion(Node* &Rhead, Node* prev) {

	Node* head = Rhead;
  if(head == NULL || head->next == NULL) {
    return head;
  }

	Node* temp = head->next; 
	head->next = prev;
	Rhead = reverseListRecursion(temp, head);
	return Rhead;
}

int main() {
  Node* head = NULL;

  insertNodeAtHead(head, 10);
  insertNodeAtHead(head, 20);
  insertNodeAtHead(head, 30);
  insertNodeAtHead(head, 40);
  insertNodeAtHead(head, 50);
  print(head);

  reverseList(head);
  print(head);

  reverseListRecursion(head, NULL);
  print(head);


  return 0;
}
