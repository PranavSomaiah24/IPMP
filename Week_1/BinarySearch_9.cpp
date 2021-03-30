//Median of 2 sorted arrays

#include<bits/stdc++.h>
using namespace std;

int arrMedian(int arr[], int N)
{
	if (N%2 == 0)
		return (arr[N/2] + arr[N/2-1])/2;
	else
		return arr[N/2];
}


int medianOf2(int arr1[], int arr2[], int N)
{
	
	if (N <= 0)
		return -1;
	if (N == 1)
		return (arr1[0] + arr2[0])/2;
	if (N == 2)
		return (max(arr1[0], arr2[0]) + min(arr1[1], arr2[1])) / 2;
	int m1 = arrMedian(arr1, N); 
	int m2 = arrMedian(arr2, N);
    if (m1 == m2)
		return m1;
	if (m1 < m2)
	{
		if (N%2 == 0)
			return medianOf2(arr1 + N/2 - 1, arr2, N - N/2 +1);
		return medianOf2(arr1 + N/2, arr2, N - N/2);
	}

	if (N % 2 == 0)
		return medianOf2(arr2 + N/2 - 1, arr1, N - N/2 + 1);
	
	return medianOf2(arr2 + N/2, arr1, N - N/2);
}



