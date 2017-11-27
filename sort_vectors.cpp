/*
 ==============================================================================
 Name        : bubbleSort.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Description : Bubble Sort [Time Complexity: Best - O(n) Worst - O(n^2) Space Complexity: O(1)]
 ==============================================================================
 */
 
#include <iostream>
#include<vector>
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


vector<int> bubble_sort(vector<int> A)
{
	for(int j=0; j<A.size(); j++)
	{
		for(int i=0; i<A.size()-1; i++)
		{
			if (A[i]>A[i+1])
				swap1(A[i],A[i+1]);
		}
	}
  return A;
}
int main()
{
	int A1[5]= {16,3,99,10,2};
  vector<int> A(A1,A1+sizeof(A1)/sizeof(A1[0]));
  vector<int> B;
  B = bubble_sort(A);
  for(int i=0; i<B.size();i++)
  {
    cout<<B[i]<<endl;
  }
	return 0;
}
