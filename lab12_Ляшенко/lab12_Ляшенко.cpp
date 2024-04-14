#include <iostream>
#include <math.h>
using namespace std;

const int m = 3, n = 3;

void sort(int array1[m][n])
{
	int i, k, x;
	for (i = 0; i < m; i++)
	{
		for (k = 0; k < m; k++)
		{
			if (array1[k][0] < array1[k + 1][0])
			{
				x = array1[k][0];
				array1[k][0] = array1[k + 1][0];
				array1[k + 1][0] = x;
			}
		}

	}

	for (i = 0; i < m; i++)
	{
		for (k = 0; k < n; k++)
		{
			cout << array1[i][k] << ' ';
		}
		cout << endl;
	}
}

int main()
{
	int array[m][n], i, k, min, max, x = 0, y = 0;

	for (i = 0; i < m; i++)
	{
		for (k = 0; k < n; k++)
		{
			cin >> array[i][k];
		}
	}

	max = array[0][0];
	min = array[0][0];

	for (i = 0; i < m; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (array[i][k] > max)
			{
				max = array[i][k];
				x = i;
			}
		}
	}

	for (i = 0; i < m; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (array[i][k] < min)
			{
				min = array[i][k];
				y = i;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		k = array[x][i];
		array[x][i] = array[y][i];
		array[y][i] = k;
	}

	cout << endl;

	for (i = 0; i < m; i++)
	{
		for (k = 0; k < n; k++)
		{
			cout << array[i][k] << ' ';
		}
		cout << endl;
	}

	cout << endl;

	sort(array);

}
