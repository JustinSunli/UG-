#include <stdio.h>  
#include <iostream>  
#include <string.h>  
#include <string>  
using namespace std;  

void output()  
{  
	cout << "hello world" << endl;  
}  
extern "C" __declspec(dllexport) int sum(int a, int b)  
{  
	/*output();  */
	return a + b;  

}  