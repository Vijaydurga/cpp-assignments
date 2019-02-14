#include<iostream>
#include<cstdlib>

using namespace std;
void swap_value(int, int);
void swap_reference(int*, int*);
void display(int,int);

int main()
{
	int a, b, c;
	cin >> a >> b;
	cout << "1.swap by value " << "2.swap by reference" << endl;
	cin >> c;

	switch (c)
	{
	case 1: swap_value(a, b);
		break;
	case 2: swap_reference(&a, &b);
		break;
	}
}
void swap_value(int x, int y)
{
	x = x + y;
	y = x - y;
	x = x - y;
	display(x, y);
	
}
void swap_reference(int*x, int*y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	display(*x, *y);
}
void display(int x,int y)
{
	cout << x << y;
	getchar();
}
