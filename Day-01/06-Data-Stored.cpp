// Data Stored
#include <iostream>
using namespace std;
int main(){
	int a = 8; 
	// int size is 4 bytes = 4 * 8 bit = 32bit
	// but a = 8, 8 in binary 1000 = 4 bit so = 32 bit - 4 bit  = 28bit  
	// so, first 28 bit are 0 then 1000 

	char b = 'A';
	// cha size is 1 byte = 1 * 8 bit  = 8bit
	// according to the ASCII Table A is 65 and 65 in binary = 1000001 = 7bit 
	// so , first 1 bit is 0 then 1000001 [binary of 65];
	return 0;
}