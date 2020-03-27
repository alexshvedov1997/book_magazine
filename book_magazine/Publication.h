#ifndef PUBLICATION_N_
#define PUBLICATION_N_

#include <string>
#include <iostream>


class publication{
protected:
	std::string name;
	double price;
public:
	publication(const std::string & nm, double pr):name(nm), price(pr){}
	void getdata(){
		std::cout<<"Name: " << name << "Price: " << price <<std::endl;
	}
};
#endif