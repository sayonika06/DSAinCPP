#include <iostream>
#include <algorithm>
using namespace std;
// #include "solution.h"


int binarySearch(int arr[], int l, int r, int x);

void intersection(int arr1[], int arr2[], int m, int n)
{

    if (m > n) {
        int* tempp = arr1;
        arr1 = arr2;
        arr2 = tempp;
 
        int temp = m;
        m = n;
        n = temp;
    }
 

    sort(arr1, arr1 + m);
 

    for (int i = 0; i < n; i++)
        if (binarySearch(arr1, 0, m - 1, arr2[i]) != -1)
            cout << arr2[i] << " ";
}
 

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        
        if (arr[mid] == x)
            return mid;
 
        
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        
        return binarySearch(arr, mid + 1, r, x);
    }
 
    return -1;
}

// void bubbleSort(int array[], int size) {

//   // loop to access each array element
//   for (int step = 0; step < (size-1); ++step) {
      
//     // loop to compare array elements
//     for (int i = 0; i < size - (step-1); ++i) {

//       // compare two adjacent elements
//       // change > to < to sort in descending order
//       if (array[i] > array[i + 1]) {

//         // swapping elements if elements
//         // are not in the intended order
//         int temp = array[i];
//         array[i] = array[i + 1];
//         array[i + 1] = temp;
//       }
//     }
//   }
// }

// void intersection(int arr1[], int arr2[], int m, int n)
// {
//     bubbleSort(arr1,m);
//     bubbleSort(arr2, n);
//     int i = 0, j = 0;
//     while (i < m && j < n) {
//         if (arr1[i] < arr2[j])
//             i++;
//         else if (arr2[j] < arr1[i])
//             j++;
//         else /* if arr1[i] == arr2[j] */
//         {
//             cout << arr2[j] << " ";
//             i++;
//             j++;
//         }
//     }
// }


 


int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}
