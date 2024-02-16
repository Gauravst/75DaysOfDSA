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

	~Node(){
		if(this->next != NULL){
			delete next;
			next = NULL;
		}
	}
};

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

void insertNode(Node*& head, int data) {
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;
}

void removeDuplicate(Node* head) {
  if(head == NULL) {
    return;
  }

  while(head != NULL) {

    if((head->next != NULL) && (head->data == head->next->data)) {

			Node* nextNode = head->next->next;
			Node* nodeToDelete = head-> next;
			delete nodeToDelete;
      head->next = nextNode;
      
    } else {
      head = head->next;
    }
  }
}

int main() {
  Node* head = NULL;

  print(head);
  insertNode(head, 10);
  insertNode(head, 20);
  insertNode(head, 20);
  insertNode(head, 30);
  insertNode(head, 40);
  insertNode(head, 40);
  insertNode(head, 50);
  print(head);

	removeDuplicate(head);
	print(head);
  return 0;
}