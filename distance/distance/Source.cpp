#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;
inline int sqr(int x)
{
	return(x*x);
}
class point
{
public:
	int x;
	int y;
	float res;
	void data()
	{
		cin >> x >> y;

	}
	void display()
	{
		cout << "result is:" << res;
	}
	friend point distance(point, point);
};
point distance(point p1, point p2)
{
	point tmp;
	tmp.res = sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
	//cout << res;
	return tmp;

}
int main()
{
	point p1, p2, p3;
	p1.data();
	p2.data();
	p3 = distance(p1, p2);
	p3.display();
	int n;
	cin >> n;
	return 0;
}