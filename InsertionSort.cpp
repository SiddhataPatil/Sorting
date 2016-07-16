/*
 ==============================================================================
 Name        : InsertionSort.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 logic help by http://cforbeginners.com // I found their logic simplest
 Description : Insertion Sort [Time complexity: Best - O(n) Worst - O(n^2)] Space Complexity: O(1)
 ==============================================================================
 */
 
#include <iostream>
using namespace std;

void insertion_sort(int* A, int size)
{
	 	int j, temp;
		
	for (int i = 0; i < size; i++){
		j = i;
		
		while (j > 0 && A[j] < A[j-1]){
			  temp = A[j];
			  A[j] = A[j-1];
			  A[j-1] = temp;
			  j--;
			  }
		}
}
int main()
{
	int A[5]={55,3,7,12,99};
	insertion_sort(A,5);
	cout<<"After Sorting"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<A[i]<<endl;
	}

	system("pause");
	return 0;
}
