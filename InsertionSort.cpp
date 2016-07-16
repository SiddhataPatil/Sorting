/*
 ==============================================================================
 Name        : InsertionSort.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Description : Insertion Sort [Best - O(n) Worst - O(n2)]
 ==============================================================================
 */
 
 //2 3 | 5 7 4 9  // so value of index2 will be replaced by value on index4
 
#include <iostream>
using namespace std;

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int find (int A[], int size, int i)
{int t=i;
for (int s= i+1; s<size; s++)
{

	if (A[s] < A[t])
	{
		t=s;
	}
}
return t;
}

void disp (int A[], int size)
{
for (int i=0;i<5;i++)
	{
		cout<< A[i]<< "  ";
	}
}

void insertion_sort(int A[], int size)
{
	for (int i=0; i<size; i++)
	{
		int temp;
		int index_with_smallest_number = find(A, 5, i);
		temp = A[i];
		A[i] = A[index_with_smallest_number];
		A[index_with_smallest_number]=temp;
	}
}
int main ()
{
	int A[5];
	srand (time(NULL));
		for (int r= 0;r < 5; r++)
		{
			A[r] = (rand()%100)+1;
		}
	disp(A,5);
	cout <<endl;
	insertion_sort(A, 5); 
	disp (A, 5);
	
	system ("pause");
	return 0;
}
