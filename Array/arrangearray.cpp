#include<iostream>
using namespace std;
void arrange(int *arr, int n)
{
    int i,j,k;
    for (i=1;i<=n;i=i+2)
    {
        return i;
    }
    if(n%2==0)
    {
        for (j=n;j<=2;j=j-2)
        {
            return j;
        }
    }
    else
    {
        for ( k=n-1;k>=2;k=k-2)
        {
            return k;
        }
        
    }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}