#include <iostream>
#include <string>
using namespace std;

//int x = 1;

void func(int c, char d, int e, int f, int g);

int main()
{
	int a = 1;
	char b = 'b';
	int x = 1; //error if int x, y, z;
	int y = 1;
	int z = 1;
	func(a, b, x, y);
}


void func(int c, char d, int e, int f, int g){
	cout << "char: " << d << endl;
	cout << "int: " << c << endl;
}

