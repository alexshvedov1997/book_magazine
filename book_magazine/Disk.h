#ifndef DISK_H_
#define DISK_H_

#include "Publication.h"
#include <string>
#include "DateTime.h"

class disk:public publication, public date_time{	
	enum dsk { CD, DVD };
public:
	dsk type_disk;
	disk(const std::string & nm, double pr, char c, const std::string & mn, int yr):publication(nm, pr),date_time(yr, mn){
		//disk(const std::string & nm, double pr, char c):publication(nm, pr){
		if(c == 'c')
			type_disk = CD;
		else if(c = 'd')
			type_disk = DVD;
	}

	void getdata(){
		publication::getdata();
		if(type_disk == CD)
			std::cout<<"CD"<<std::endl;
		else if(type_disk == DVD)
			std::cout<<"DVD"<<std::endl;
		date_time::getdata();
	}
	

};

#endif