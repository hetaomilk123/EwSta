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

#if 0
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
#endif

#if 0
// Test 5
// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <unistd.h>
using namespace std; 

void foo() 
{
  // do stuff...
  for (int i = 0; i < 100; i++) 
  {
	cout << "foo()" << endl;
	sleep(1);
  }
}

void bar(int x)
{
  // do stuff...
  for (int i = 0; i < x; i++)
  {
	cout << "bar()" << endl;
	sleep(1);
  }
}

int main() 
{
  std::thread first (foo);     // spawn new thread that calls foo()
  std::thread second (bar, 100);  // spawn new thread that calls bar(0)

  std::cout << "main, foo and bar now execute concurrently...\n";

  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes

  std::cout << "foo and bar completed.\n";

  return 0;
}

#endif

//// Test 6
//// std::move() example
//
//// move example
//#include <utility>      // std::move
//#include <iostream>     // std::cout
//#include <vector>       // std::vector
//#include <string>       // std::string
//
//int main () {
//  std::string foo = "foo-string";
//  std::string bar = "bar-string";
//  std::vector<std::string> myvector;
//
//  myvector.push_back (foo);                    // copies
//  myvector.push_back (std::move(bar));         // moves
//
//  std::cout << "myvector contains:";
//  for (std::string& x:myvector) std::cout << ' ' << x;
//  std::cout << '\n';
//
//  std::cout << "bar: " << bar << std::endl;
//  return 0;
//}

#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <string>       // std::string

class Foo {
public:
    static Foo* create(int n = 2) {
        return new Foo{n};
    }

private:
    Foo() = default;
    explicit Foo(int some) : some(some) {}
    void doSomeThing() { }  // unable to invoke it outside the scope of member
        // function

public:
    int getSome() const {
        return some;
    }

    int getSome(const Foo& f) const {
        return f.some;
    }
private:
    int some;
};



int main () {
    Foo* o1 = Foo::create();
    Foo* o2 = Foo::create(5);

    std::cout << o2->getSome(*o1) << std::endl;
    return 0;
}
