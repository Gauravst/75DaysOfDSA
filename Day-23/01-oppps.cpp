#include <iostream>
using namespace std;

class Hero {
private: // private code
  string behaviour = "Good";

public: // public code 
  int height = 45;
  int power = 6774;
  char rank = 'G';

	// setters
  void setrank(char a) {
    rank = a;
  }

	// getter
  string getBehavior() {
    return behaviour;
  }

	// constructor
  Hero() {
    cout << "Constructor Called" << endl;
  }

	// parameterised constructor
	Hero(int height){
		this -> height = height;
		cout << "parameterised Constructor Called" << endl;
		cout <<" this is :- "<< this << endl;
	}

	// custom copy constructor
	Hero(Hero& temp){
		this->height = temp.height;
		this->power = temp.power;
	}

};

int main() {
  Hero gaurav(14);
  cout << "Gaurav's height " << gaurav.height << endl;
  cout << "Gaurav's power " << gaurav.power << endl;
  gaurav.setrank('A');
  cout << "Gaurav's rank " << gaurav.height << endl;
  cout << "Get behaviour " << gaurav.getBehavior() << endl;

  Hero *g = new Hero();
  cout << "(*g)'s height " << (*g).height << endl;
  cout << "(*g)'s power " << (*g).power << endl;
// constructor
	cout << "g->height " << g->height << endl;
  cout << "g->power " << g->power << endl;

	cout << "Gaurav Is :- " << &gaurav << endl;

	// copy constructor
	Hero mohit(gaurav);
	cout << "Mohit height :- " << mohit.height << endl;
  return 0;
};