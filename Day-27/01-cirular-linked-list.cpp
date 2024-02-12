#include <iostream>
using namespace std;

class Node{

	public:
	int data;
	Node* next;

	Node(int data){
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

void insertNode(Node* &tail, int element, int data){

	if(tail == NULL){
		Node* temp = new Node(data);
		temp->next = temp;
		tail = temp;
	}else{

		Node* curr = tail;
		while (curr->data != element){
			curr = curr->next;
		}
		
		Node* temp = new Node(data);
		temp->next = curr->next;
		curr->next = temp;
		tail = temp;
	}
}

void print(Node* tail){
	Node* temp = tail;

	if(temp == NULL){
		cout << "List is empty." << endl;
		return;
	}
	do{
		cout << temp->data << " "; 
		temp = temp->next;
	}while (temp != tail);
	cout << endl;
}

void deleteNode(Node* &tail, int data){

	if(tail == NULL){
		cout << "List is empty" << endl;
		return;
	}

	Node* prev = tail;
	Node* curr = prev->next;

	while (curr->data != data){
		prev = curr;
		curr = curr->next;
	}

	prev->next = curr->next;

	if(curr == prev){
		tail =NULL;
	}

	curr->next = NULL;
	delete curr;
	
}

int main(){

	Node* tail = NULL;

	insertNode(tail, 0, 10);
	insertNode(tail, 10, 20);
	insertNode(tail, 20, 30);
	insertNode(tail, 10, 15);
	print(tail);

	deleteNode(tail, 10);
	print(tail);
	return 0;
}