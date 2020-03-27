#include <iostream>

#include "Book.h"
#include "Type.h"
#include "Disk.h"

using namespace std;

int main(){
	book bk("tom", 122,  232, "dgfdsg");
	bk.getdata();
	type tm("aud" , 23 , 23.32);
	tm.getdata();
	cout<< string(20,'-')<<endl;
	disk dsk("disk_exmp", 23, 'c', "april" , 1997);
//	disk dsk("disk_exmp", 23, 'c');
	dsk.getdata();

	return 0;
}