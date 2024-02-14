#include <iostream>
#include <map>
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

void insert(Node*& head, Node*& tail, int data) {
  Node* temp = new Node(data);
  temp->next = head;
  head = temp;

  if(tail == NULL) {
    tail = temp;
  }
}

void print(Node*& head) {
  if(head == NULL) {
    cout << "list is empty." << endl;
    return;
  }

  Node* temp = head;
  while(temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

bool checkLoop(Node* head) {
  if(head == NULL) {
    return false;
  }

  map<Node*, bool> visited;
  Node* temp = head;

  while(temp != NULL) {
    if(visited[temp] == true) {
      return true;
    }

    visited[temp] = true;
    temp = temp->next;
  }

  return false;
}

Node* floydCycle(Node*& head) {
  if(head == NULL) {
    return NULL;
  }

  Node* slow = head;
  Node* fast = head;

  while(slow != NULL && fast != NULL) {
    slow = slow->next;
    fast = fast->next;

    if(fast != NULL) {
      fast = fast->next;
    }

    if(slow == fast) {
      return slow;
    }
  }
  return NULL;
}

Node* getStartingNode(Node* head) {
  if(head == NULL) {
    return NULL;
  }

  Node* intersection = floydCycle(head);
	Node* slow = head;

	while (slow != intersection){
		slow = slow->next;
		intersection = intersection -> next;
	}
	
	return slow;
}


void removeLoop(Node* head){

	if(head == NULL){
		return;
	}

	Node* startingNode = getStartingNode(head);
	Node* temp = startingNode;

	while (temp->next != startingNode){
		temp = temp->next;
	}

	temp ->next = NULL;
	
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;

  print(head);
  insert(head, tail, 10);
  insert(head, tail, 20);
  insert(head, tail, 30);
  insert(head, tail, 40);
  insert(head, tail, 50);
  print(head);
  cout << "tail is :- " << tail->data << endl;

  tail->next = head->next;

  cout << endl;
  cout << endl;

  if(checkLoop(head)) {
    cout << "loop in list" << endl;
  } else {
    cout << "No loop in list" << endl;
  }

  if(floydCycle(head) != NULL) {
    cout << "loop in list" << endl;
  } else {
    cout << "No loop in list" << endl;
  }

	Node* startingNode =  getStartingNode(head);
	cout << "Starting Node of Loop is :- " << startingNode -> data << endl;

	removeLoop(head);
	  if(floydCycle(head) != NULL) {
    cout << "loop in list" << endl;
  } else {
    cout << "No loop in list" << endl;
  }


  return 0;
}