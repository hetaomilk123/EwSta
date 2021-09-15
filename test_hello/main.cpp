#include <iostream>
using namespace std;

int main()
{
	cout << "hello, hetaomilk!" << endl;
	int *p = NULL;

	{
		int val = 20;
		p = &val;
		cout << "*p in local: " << *p << endl;
	}	

	cout << "*p out local: " << *p << endl;
	return 0;
}
