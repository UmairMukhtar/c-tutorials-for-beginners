#include<iostream>
using namespace std;
int main()
{
	//the code we write inside this loop will be executed 4 times
	for(int i=0;i<4;i++)
	{
		//the code we write inside this inner loop will also be executed less than or equal to i times
		//During first loop value of i will be 0 so the inner loop will run once print one star
		//During first loop value of i will be 1 so the inner loop will run twice for J=0  and J=1 and print two stars
		//During first loop value of i will be 2 so the inner loop will run three times for J=0  and J=1 and J=2 
		//During first loop value of i will be 3 so the inner loop will run four times for J=0  and J=1 and J=2 and J=3
		for(int j=0;j<=i;j++)
		{
			cout<<"*  ";
		}
		//After running above loop everytime we will print endline
		cout<<endl;
	}
}
