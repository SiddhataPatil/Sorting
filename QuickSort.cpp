/*
 ==============================================================================
 Name        : QuickSort.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Description : Quick Sort [Time complexity: Best - O(nlogn) Worst - O(n^2)] Space Complexity: O(log(n))
 ==============================================================================
 */
 
#include <iostream>
using namespace std;

int pivot=0;
void quick_sort(int* A, int start, int end)
{
	int size = (end-start) +1;
	int *small = new int[size];
	int *large = new int[size];
	int *quick = new int[size];
	int s=0;
	int t=0;
	int q=0;
	int next = start;
	if(pivot>end)
	{
	}
	else{
		while(next<end)
		{
			if(pivot==0)
			{
			if(A[pivot]>A[next+1])
			{
			small[s]=A[next+1];
			s++;
			next++;
			}
			else 
			{
			large[t]=A[next+1];
			t++;
			next++;
			}
			}

			else
			{
			if(A[pivot]>A[next])
			{
			small[s]=A[next];
			s++;
			next++;
			if(next==pivot)
			next++;
			}
			else 
			{
			large[t]=A[next];
			t++;
			next++;
			if(next==pivot)
			next++;
			}
			}
		}
	for(int f=0; f<s;f++)
	{
	cout<<"Small["<<f<<"]"<<small[f]<<endl;
	}
	for(int f=0; f<t;f++)
	{
	cout<<"Large["<<f<<"]"<<large[f]<<endl;
	}
	for(int z=t; z>0; z--)
	{
	large[z]=large[z-1];
	}
	large[0]=A[pivot];
	for(int f=0; f<t+1;f++)
	{
	cout<<"modifiedLarge["<<f<<"]"<<large[f]<<endl;
	}
	for(int k=s-1; k>=0;k--)
	{
	quick[q] = small[k];
	q++;
	}
	for(int f=0; f<s;f++)
	{
	cout<<"QuickSmall["<<f<<"]"<<quick[f]<<endl;
	}
	for (int k =0; k<=t+2; k++)
	{
	quick[q++] = large[k];
	}
	for(int f=0; f<size;f++)
	{
	cout<<"Quick"<<quick[f]<<endl;
	}
	if (A[pivot]==quick[pivot])
	{
	pivot++;
	}
	else
	{
	pivot=0;
	}
	for (int f=0; f<size; f++)
	{
	A[f] = quick[f];
	}
	quick_sort(A,start,end);
	} //else bracket
	for (int f=0; f<size; f++)
	{
	A[f] = quick[f];
	}
	delete[] small;
	delete[] large;
	/*delete[] quick;*/
}
int main()
{
	int Array1[5]={12,5,17,2,99};
	quick_sort(Array1, 0,4);
	cout<<"After Sorting"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<Array1[i]<<endl;
	}
	system("pause");
	return 0;
}
