#ifndef TYPE_H_
#define TYPE_H_

#include "Publication.h"

class type:public publication{
protected:
	double time_to_type;
public:
	type(const std::string & nm, double pr, double time):publication(nm, pr),time_to_type(time){}
	void getdata(){
		publication::getdata();
		std::cout<<"time to type " << time_to_type <<  std::endl;
	}
	
};

#endif TYPE_H_