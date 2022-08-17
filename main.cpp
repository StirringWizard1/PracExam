#include "Library.h"
#include "Document.h"
#include "Book.h"
#include <iostream>

int main ()
{

	Library T1();
	//polymorphisim 
	Document *B1 = new Book("Art of War");

	T1.addDocument(B1)

	std::cout << T1.hasDocument(B1) << std::endl;

	return 0;
}








// #ifndef TEST
// #define TEST


// #include <iostream>

// class test
// {
// private: 

// public: 

// test()



// };
// #endif 