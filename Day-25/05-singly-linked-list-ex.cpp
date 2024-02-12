#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
  }

  ~Node() {
    if(this->next != NULL) {
      delete next;
      this->next = NULL;
    }
  }
};

void insertAtHead(Node*& head, int data) {
  Node* temp = new Node(data);
  temp->data = data;
  temp->next = head;
  head = temp;
}

void InsertAtTail(Node*& tail, int data) {
  Node* temp = new Node(data);
  temp->data = data;
  temp->next = NULL;
  tail->next = temp;
  tail = temp;
}

void InsertAtPosition(Node*& tail, Node*& head, int position, int data) {
  if(position == 1) {
    insertAtHead(head, data);
    return;
  }

  Node* temp = head;
  int cnt = 1;

  while(cnt < position - 1) {
    temp = temp->next;
    cnt++;
  }

  if(temp->next == NULL) {
    InsertAtTail(tail, data);
    return;
  }

  // new node for data
  Node* nodeToInsert = new Node(data);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

void deleteNode(int position, Node*& head) {
  if(position == 1) {
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
  } else {
    Node* curr = head;
    Node* pre = NULL;
    int cnt = 1;

    while(cnt < position) {
      pre = curr;
      curr = curr->next;
      cnt++;
    }

    pre->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

void print(Node*& head) {
  Node* temp = head;

  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

bool checkCircular(Node*& head) {
  // if(head == NULL) {
  //   return true;
  // }

  // if(head->next == NULL) {
  //   return false;
  // }

  Node* temp = head->next;
  while(temp != NULL && temp != head) {
    temp = temp->next;
  }

  if(temp = head) {
    return true;
  }
  return false;
}

int main() {
  Node* n1 = new Node(10);
  Node* head = n1;
  Node* tail = n1;
  print(head);

  insertAtHead(head, 20);
  insertAtHead(head, 30);
  print(head);

  InsertAtTail(tail, 45);
  print(head);

  InsertAtPosition(tail, head, 2, 7);
  print(head);

  deleteNode(2, head);
  print(head);

  if(checkCircular(head)) {
    cout << "List is Circular" << endl;
  } else {
    cout << "List not circular" << endl;
  }
  return 0;
}