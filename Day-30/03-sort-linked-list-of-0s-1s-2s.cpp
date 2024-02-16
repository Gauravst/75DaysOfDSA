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
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;
}

void print(Node*& head) {
  if(head == NULL) {
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

void sortUsingCount(Node*& head) {
  if(head == NULL) {
    return;
  }

  Node* temp = head;
  int zeroCount = 0;
  int oneCount = 0;
  int twoCount = 0;

  while(temp != NULL) {
    if(temp->data == 0) {
      zeroCount++;

    } else if(temp->data == 1) {
      oneCount++;

    } else if(temp->data == 2) {
      twoCount++;
    }
    temp = temp->next;
  }

  temp = head;
  while(temp != NULL) {
    if(zeroCount > 0) {
      temp->data = 0;
      zeroCount--;

    } else if(oneCount > 0) {
      temp->data = 1;
      oneCount--;

    } else if(twoCount > 0) {
      temp->data = 2;
      twoCount--;
    }
    temp = temp->next;
  }
}

int main() {
  Node* head = NULL;

  print(head);
  insertNode(head, 0);
  insertNode(head, 2);
  insertNode(head, 2);
  insertNode(head, 1);
  insertNode(head, 0);
  insertNode(head, 1);
  insertNode(head, 1);
  insertNode(head, 2);
  print(head);

  sortUsingCount(head);
  print(head);

  return 0;
}