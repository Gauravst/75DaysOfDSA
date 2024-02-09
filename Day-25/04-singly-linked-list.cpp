#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
  }
};

void insertAtHead(Node*& head, int data) {
  Node* temp = new Node(data);
  temp->data = data;
  temp->next = head;
  head = temp;
}

void insertAtTail(Node*& tail, int data) {
  Node* temp = new Node(data);
  temp->data = data;
  temp->next = NULL;
  tail->next = temp;
  tail = temp;
}

void insertAtPosition(Node*& head, Node*& tail, int position, int data) {
  if(position == 1) {
    insertAtHead(head, data);
    return;
  }

  Node* temp = head;
  int cnt = 1;

  while(cnt < position -1) {
    temp = temp->next;
    cnt++;
  }

  if(temp->next == NULL) {
    insertAtTail(tail, data);
    return;
  }

  Node* nodeToInsert = new Node(data);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

void print(Node*& head) {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Node* n1 = new Node(10);
  Node* head = n1;
  Node* tail = n1;
  print(head);

  insertAtHead(head, 20);
  insertAtHead(head, 30);
  print(head);

  insertAtTail(tail, 45);
  print(head);

  insertAtPosition(tail, head, 2, 7);
  print(head);
  return 0;
}