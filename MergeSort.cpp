/*
 ==============================================================================
 Name        : MergeSort.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 logic help by http://codereview.stackexchange.com/
 Description : Merge Sort [Time complexity: Best - O(n) Worst - O(nlogn)] Space Complexity: O(n)
 ==============================================================================
 */
 
 void merge (int* A,int s,int p,int e)
{
	int size;
	size = (e-s)+1;
	int* Merge = new int [size];

	int i=s;
	int j=p+1;
	int k=0;

	while (k<size)
	{
		if((i<=p)&& (A[i]<A[j]))
		{
			Merge[k++]=A[i++];
		}
		else
		{
			Merge[k++] = A[j++];
		}
	}

	for (k=0; k<size; k++)
	{
		A[s+k] = Merge[k];
	}
	delete [] Merge;

}



	
void merge_sort(int* A, int start, int end)
{
	if(start >= end)
	{
		return;
	}
		int Partition;
		Partition=(start+end)/2;
		merge_sort(A,start,Partition);
		merge_sort(A,Partition+1, end);
		merge(A, start, Partition, end);
	
}



int main()
{
	int Array1[5]={12,5,17,2,99};
	merge_sort(Array1, 0, 4);
	cout<<"After Sorting"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<Array1[i]<<endl;
	}
	system("pause");
	return 0;
}
