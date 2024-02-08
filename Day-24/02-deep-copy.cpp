#include <iostream>
#include <cstring> 
using namespace std;

class Hero{

	public:
	char *name;

	Hero(){
		name = new char[100];
	}

	Hero(Hero& temp){
		char *ch = new char[strlen(temp.name)+1];
		strcpy(ch, temp.name);
		this->name = ch;
	}

	void setName(char name[]){
		strcpy(this->name , name);
	}

	void print(string h){
		cout << h << " Name is :- " <<this->name << endl;
	}
};

int main(){

	Hero hero1;
	char name[7] = "Gaurav";
	hero1.setName(name);
	hero1.print("Hero 1");

	Hero hero2(hero1);
	hero2.print("Hero 2");

	hero1.name[0] = 'H';
	hero1.print("After Change Hero1 is");
	hero2.print("After Change Hero1, Hero2 is");


	return 0;
}