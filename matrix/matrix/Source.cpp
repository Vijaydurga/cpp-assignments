#include<iostream>
#include<cstdlib>
using namespace std;
class matrix
{
	int rows, columns;
	int **ptr=NULL;
public:
	void display()
	{
		int i, j;
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < columns; j++)
				cout << ptr[i][j];
			cout << endl;
		}
		
	}
	void data()
	{
		
		cout << "Enter rows &cols:";
		cin >> rows >> columns;
	}
	void memory()
	{
		int i, j;
		ptr = new int*[rows];
		for (i = 0; i < rows; i++)
			ptr[i] = new int[columns];
	}
	void get_data()
	{
		int i, j;
		cout << "Enter " << rows*columns << "values";
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < columns; j++)
			{
				cin >> ptr[i][j];
			}
		}
	}

		friend matrix multiplication(matrix,matrix );
};


matrix multiplication(matrix m1,matrix m2)
{
	matrix m3;
	int i = 0, j = 0, k = 0,sum=0;
	if (m1.columns == m2.rows)
	{
		m3.rows = m1.rows;
		m3.columns = m2.columns;
		m3.memory();
		for (i = 0; i < m1.rows; i++)
		{
			for (j = 0; j < m2.columns; j++)
			{
				sum = 0;
				for (k = 0; k < m2.rows; k++)
				{
					sum = sum + m1.ptr[i][k] * m2.ptr[k][j];
				}
				m3.ptr[i][j] = sum;
			}
		}
	}
	else
		cout << "multiplication not possible";
	return(m3);
}
	int main()
	{
		matrix m1, m2, m4;
		m1.data(); m1.memory();
		m1.get_data();
		m2.data();
		m2.memory();
		m2.get_data();
		m4 = multiplication(m1,m2);
		m4.display();
		system("pause");
	}