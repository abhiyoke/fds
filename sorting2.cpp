//Name:Abhishek Kumar
//Roll no.:7203
//Branch:SE Comp-B
#include <bits/stdc++.h>
using namespace std;

//Quick sort

void quick_sort(int a[],int start,int end,int n)
{
  int i=start+1;
   int j=end;
  if(i<=j)
  {
      int pivot=a[start];
      while(i<j)
  {
      while(a[i]<=pivot && i<end)
        i++;
      while(a[j]>=pivot && j>start)
        j--;
      if(i<j) swap(a[i],a[j]);
      else break;
  }
  if(i>=j)
  { 
      if(a[j]<a[start])
      swap(a[j],a[start]);
  } 

  for(int i=0;i<n;i++)
  {
cout<<a[i]<<" ";
}
  cout<<endl; 
    
  quick_sort(a,j+1,end,n);
  quick_sort(a,start,j-1,n);
  }
}

// Radix sort

void radix_sort(int arr[], int size)
{
	int x, max_element=0;
	int len=1;

  int a[size];
  queue<int> q[10];
  for(int i = 0; i < size ; i++)
    {
      a[i] = arr[i];
      q[a[i]%10].push(a[i]);
      if (a[i] > max_element)
      { max_element = a[i];}
    }

	while (max_element>0) 
	{
max_element/=10; 
len++; 
}

	int d =10;
	while(len--){
		int n=0;

		for (int i=0; i<10; i++){
			
			while(!q[i].empty())
			{		
				a[n] =q[i].front();
				q[i].pop(); n++;
			}
		}
		
		for (int i=0; i<size; i++)
		{
			int r=a[i]; 
			cout << a[i] << " ";
			q[(r/d)%10].push(a[i]);
		}
		d*=10;
		cout << endl;
	}
}


signed main()
{
    int n;
    cout<<"enter the total number of students : ";
    cin>>n;
    int a[n];
    cout<<"enter percentage marks of students : ";
    for(int i = 0; i < n ; i++)
    {
      cin>>a[i];
    }
    cout<<endl;
    
    int start=0, end=n-1; 
    cout<<"quick sort-"<<endl;
    quick_sort(a,start,end,n);
    
    cout<<"radix sort-"<<endl;
    radix_sort(a,n);

    return 0;
}

