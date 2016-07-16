/*
 ==============================================================================
 Name        : bubbleSort.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Description : Bubble Sort [Best - O(n) Worst - O(n^2)]
 ==============================================================================
 */
 
#include <iostream>
using namespace std;

void print1 (int* t, int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<t[i]<<endl;
	}

}

void swap1(int &n1, int &n2)
{
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
}


void bubble_sort(int* p, int size)
{
	for(int j=0; j<size; j++)
	{
		for(int i=0; i<size-1; i++)
		{
			if (p[i]>p[i+1])
				swap1(p[i],p[i+1]);
		}
	}
	
	print1(p,size);
}
int main()
{
	int A[5]= {16,3,99,10,2};
	int *p1= A;
	bubble_sort(p1, 5);
	system ("pause");
	return 0;
}
