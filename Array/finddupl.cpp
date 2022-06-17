#include <iostream>
using namespace std;

int duplicateNumber(int arr[], int size)
{
   int duplicate=0;
   for (int currentnum = 1; currentnum < size-1; currentnum++)

   {
       int count=0;
       for (int i = 0; i < size-1; i++)
       {
           if(arr[i]==currentnum)
           {
               count=count+1;
           }
       }
       if (count>1)
       {
           duplicate=currentnum;
       }

   }
   return duplicate;
   
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}
