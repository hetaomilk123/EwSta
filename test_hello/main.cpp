# if 0
// Test 2
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
#endif

#if 0
// Test 3
#include <iostream>
#include <assert.h>
using namespace std;

int main()
{
	assert(2 == 2);
	assert(2 == 3);  // will cause exception
	return 0;
}
#endif

// Test 4
#include <iostream>
#include <assert.h>
using namespace std;

class Base
{
public:
	static const int month;
};

const int Base::month{12};

int main()
{
	cout << Base::month << endl;
	return 0;
}
