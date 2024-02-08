#include <iostream>
using namespace std;

class A{
	public:
	int aData;
};

class B:public A{
	public:
	int bData;
};

class C:public B{
	public:
	int cData;
};

class X:public C{
	public:
	int xData;
};

class Y:public C{
	public:
	int yData;
};

int main(){

	X x1;
	cout << "x1's xdata "<< x1.xData << endl;
	cout << "x1's adata "<< x1.aData << endl;
	cout << "x1's bdata "<< x1.bData << endl;
	cout << "x1's cdata "<< x1.cData << endl;

	Y y1;
	cout << "y1's ydata "<< y1.yData << endl;
	cout << "y1's adata "<< y1.aData << endl;
	cout << "y1's bdata "<< y1.bData << endl;
	cout << "y1's cdata "<< y1.cData << endl;

	return 0;
}