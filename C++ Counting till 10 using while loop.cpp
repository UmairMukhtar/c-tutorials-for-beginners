//this simple program will display counting till 10 using while loop
#include<iostream>
using namespace std;
int main()
{
	// here we are declaring an integer variable giving it initial value of 0
	int i =0;
	//start value of i from zero and keep increasing its value untill it is less than 10
	while(i<10)
	{
		//As value of is i starting from 0 so we will add 1 to it everytime we display it
		cout<<i+1<<endl;
		//we need to increase the value otherwise it will become infinite loop
		//next line will increase the value by one
		i++;
	}
}
