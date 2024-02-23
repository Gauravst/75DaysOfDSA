#include <iostream>
using namespace std;

class Stack {
public:
  int *arr;
  int top;
  int size;

  Stack(int size) {
    this->size = size;
    arr = new int[size];
    top = -1;
  }

  void push(int data) {
    if((size - top) != 1) {
      top++;
      arr[top] = data;
    } else {
      cout << "stack is full" << endl;
    }
  }

  void pop() {
    if(top != -1) {
      top--;
    } else {
      cout << "stack is empty" << endl;
    }
  }

  void peek() {
    if(top != -1) {
      cout << arr[top] << endl;
    } else {
      cout << "stack is empty" << endl;
    }
  }

	bool empty(){
		if(top == -1){
			return true;
		}
		return false;
	}
};

int main() {
	Stack s(4);
	s.peek();

	s.push(10);
	s.peek();

	s.push(20);
	s.peek();

	s.push(30);
	s.peek();

	s.pop();
	s.peek();

  return 0;
}