#include <iostream>
// #include "solution.h"
using namespace std;
int findUnique(int ar[], int size)
    {
        int res = ar[0];
        for (int i = 1; i < size; i++)
            res = res ^ ar[i];
 
        return res;
    }

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}
