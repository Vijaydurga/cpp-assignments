#include<iostream>
#include<cstdlib>

using namespace std;
class distance2;
class distance1
{
	float m, cm;
public:
	void data()
	{
		cin >> m >> cm;
	}
	void display()
	{
		cout << m <<" " << cm;
	}
	friend distance1 addition(distance1, distance2);
};
class distance2
{
	float ft, inch;
	
public:
	void data()
	{
		cin >> ft >> inch;
	}
	void display()
	{
		cout << ft <<" "<< inch;
	}
	friend distance1 addition(distance1, distance2);
};
distance1 addition(distance1 d1, distance2 d2)
{
	distance1 d;
	d.m = d1.m+d2.ft*0.308f;
	d.cm = d1.cm + ((d2.inch / 12)*0.308f);
	return(d);
}
int main()
{
	distance1 d1,d3;
	distance2 d2;
	d1.data();
	d2.data();
	d3 = addition(d1, d2);
	d3.display();
	system("pause");
}

