#include<iostream>
using namespace std;
int main()
{
	//the code we write inside this loop will be executed 4 times
	for(int i=0;i<4;i++)
	{
		//the code we write inside this inner loop will also be executed 4 times
		for(int j=0;j<4;j++)
		{
			//this will print 4 stars every time this loop is executed  (4 times in this case beacuse outer loop is running 4 times)
			cout<<"*  ";
		}
		//After printing 4 starts we will move to next line using endl
		cout<<endl;
	}
}
