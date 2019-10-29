#include "cl_1.h"
#include <iostream>
using namespace std;

void cl_1::get_name_by_addr(string path){
	cout<<endl<<"Object name: "<<(get_object(path))->get_object_name();
}
_____________________
#include "cl_3.h"
	
	cl_3::cl_3()
	{
		set_state(1);
	}
  ____________________
  #include "cl_4.h"
	
	cl_4::cl_4()
	{
		set_state(0);
	}
