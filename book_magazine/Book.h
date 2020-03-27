#ifndef BOOK_H_
#define BOOK_H_

#include "Publication.h"
#include <iostream>
#include <string>

class book:public publication{
protected:
	int countPage;
	std::string type;
public:
	book(const std::string & nm, double pr, int page, const std::string & tp):publication(nm, pr),countPage(page),type(tp){}
	void getdata(){
		publication::getdata();
		std::cout<<" Type: " << type << "Count page: " << countPage << std::endl;
	}


};

#endif