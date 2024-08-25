#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
	int c;
	c =  *x;
	*x = *y;
	*y = c;
	
	cout<<"The swapping is complete"<<endl;
}

int main()
{
	int a, b;
	a = 3;
	b = 4;
	
	swap(&a,&b);
	
	cout<<"After swapping values a: "<<a<<"b:"<<b<<endl;
	return 0;
}
