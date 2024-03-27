//libraries
#include <iostream>
#include <string>
#include <cassert>
#include <time.h>
#include <Windows.h>

using namespace std;

string greeting(string name)
{
	return "Hello " + name + "!";
}


int main()
{

	clock_t start, end; //time to add the clock function

	start = clock(); // this stores the start time
	Sleep(2000);
	end = clock(); // this one notes the end time
	cout << "time elpased: " << (end - start) << " in MS" << end; //our computers are very fast so displaying the time miliseconds, rather than seconds 
	
	//this is a test for the assert command
	assert(greeting("Chris") == "Hello Chris!");
	return 0;
}