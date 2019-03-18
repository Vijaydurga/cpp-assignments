#include<iostream>

#include<cstdlib>

using namespace std;

class complex

{

	int real, img;

public:

	void data()

	{

		cin >> real >> img;

	}

	friend ostream& operator<<(ostream& cout, complex);

};

ostream& operator<<(ostream& cout, complex c)

{

	cout << "real=" << c.real << endl;

	cout << "img=" << c.img << endl;

	return(cout);

}

int main()

{

	complex c3;

	c3.data();

	cout << c3;

	system("pause");

}