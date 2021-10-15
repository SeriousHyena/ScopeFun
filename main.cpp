#include <iostream>

using namespace std;

//declare functions here
void someFunction(int aParam);

double myGlobalDouble = 3.14159;				//global scope variable
int foo = 12;

int main()
{
	
	int localToMain = 20;						//local scope variable
	cout << "The global to main variable is: " << localToMain << endl;
	cout << "Global double in main is: " << myGlobalDouble << endl;
	
	someFunction(25);
	someFunction(28);
	someFunction(32);

	return 0;
}

void someFunction(int aParam)
{
	int myLocalNum = 100;						//local scope variable
	static int myStatic = 500;					//memory space reserved for life of program not just life of function execution
	myStatic++;
	myLocalNum++;
	myGlobalDouble++;

	cout << "My local number is: " << myLocalNum << endl;
	cout << "The parameter is: " << aParam << endl;
	cout << "My global double (in somefunction) is: " << myGlobalDouble << endl;
	cout << "my static variable: " << myStatic << endl;
}