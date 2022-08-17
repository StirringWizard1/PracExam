#ifndef BOOK_H
#define BOOK_H


#include <iostream>
#include "Document.h"


class Book : public Document
{
private:

std::string Name;  

public: 

Book(std::string n);



};
#endif 