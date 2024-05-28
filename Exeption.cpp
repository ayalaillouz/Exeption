#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int* b;
	try
	{
		b = &a;
		cout << b << endl;
	}
	catch (char* ex)
	{
	
		throw "throwing an exception";
	}
	int arr[3] = { 2,5,4 };
	try
	{
		a=arr[20];
	}

	catch (char* ex)
	{

		throw "throwing an exception";
	}
	try
	{
		cout << *(b+2) << endl;
	
	}

	catch (char* ex)
	{

		throw "throwing an exception";
	}
	catch (...) 
	{
		cout << "Good😊😊" << endl;
	}
}
