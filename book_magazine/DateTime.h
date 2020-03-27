#ifndef DATETIME_H_
#define DATETIME_H_

class date_time{
protected:
	std::string month;
	int year;
public:
	date_time(int yr, const std::string  mn):month(mn),year(yr){}

	void getdata(){
	std::cout<<"MOnth: " <<month<<" Year: "<< year << std::endl;
	}

};


#endif