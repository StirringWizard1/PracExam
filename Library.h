#ifndef LIBRARY_H
#define LIBRARY_H


#include <vector>
#include "Document.h"


class Library
{
private: 
	
	std::vector <Document> MyLibrary; 

public: 

Library();
void addDocument (Document Input); 
bool hasDocument (Document Input2);

};
#endif 