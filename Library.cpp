#include "Library.h"
#include "Document.h"
#include <vector>

Library::Library()
{

}

void Library::addDocument (Document Input)
{
	MyLibrary.push_back(Input);
} 

bool Library::hasDocument (Document Input)
{
	if(std::find(MyLibrary.begin(), MyLibrary.end(), Input))
	{
		return 1;
	}
	else
	{
		return 0; 
	}

}
