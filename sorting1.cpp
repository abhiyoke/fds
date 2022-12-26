//Name:Abhishek Kumar
//Roll no.:7203
//Branch:SE Comp-B

#include <bits/stdc++.h>
using namespace std;

void bubblesort(float a1[], int n)
{
        float a[n];
         cout<<"bubble sort:";
          for(int i =0; i < n; i++)
       {
                a[i] = a1[i];
        }
        int comp= 0;
        int swaps= 0;
        int x =n;
        bool flag = true;
        while(flag)
        {       
                flag = false;
                for(int i = 1 ; i < n ; i++)
                {
                        if (a[i - 1] > a[i])
                        {
                                swap(a[i-1],a[i]);
                                flag = true;
                                swaps++;
                        } 
                        comp++ ;                                       
                }
                n-- ;
                cout<<"array after every pass is : ";
                for(int i= 0; i<x; i++)
                {                        
                       cout<<a[i]<<" ";
                }            
        cout<<endl;     
        }
        
        cout<<"sorted array by bubble sort is : ";
        for(int i = 0; i<x; i++)
        {
                cout<<a[i]<<" ";
        }  
        
        cout<<endl; 
        cout<<"number of comparisons are :"<<comp<<endl;
        cout<<"number of swaps are :"<<swaps<<endl;
        cout<<"top five percentages are : ";
          int j=x-1;
       while(j>x-6)
        {
                cout<<a[j]<<" ";
                j--;

        }  
        cout<<endl; 
            
}     

void selectionsort(float a1[], int n)
{
        cout<<"selection sort:";
        float a[n];
   
        
        int comp = 0;
        int swaps = 0;
        int index;
        int mini;
            for(int i =0; i < n; i++)
       {
                a[i] = a1[i];
        }
        for(int i = 0 ; i <n-1 ; i++)
        {
                mini = a[i];
                index = i;
                for(int j = i+1 ; j < n ; j++)
                { 
                        if (mini > a[j])
                        {
                                mini= a[j];
                                index = j;
                        }
                }
                swap(a[index],a[i]);
                if( index == i)
                     comp++;                  
                if (a[index] >a[i])
                     swaps ++;
                cout<<"array after pass is : ";
                for(int i = 0; i<n; i++)
                {
                        cout<<a[i]<<" ";
                }  
                cout<<endl;
        }
        
        cout<<"number of comparisons required are "<<comp<<endl;
        cout<<"number of swaps required are "<<swaps<<endl;
        cout<<"sorted array by selection sort is : ";
        for(int i = 0; i<n; i++)
        {
                cout<<a[i]<<" ";
        }  
        cout<<endl;

        cout<<"top five perecentages are : ";
         int j=n-1;
       while(j>n-6)
        {
                cout<<a[j]<<" ";
                j--;
        }  
        cout<<endl;
}  

void insertionsort(float a1[] , int n)
{
        cout<<"insertion sort:";
        float a[n];
        for(int i =0; i < n; i++)
       {
                a[i] = a1[i];
        }
                
        int comp = 0;
        for(int i = 1; i<n; i++)
        {
                float temp = a[i];
                int j = i-1;
                while(1)
                {
                        if (j== -1)
                        {
                                a[j+1] = temp;
                                break;
                        }
                        
                        else if (a[j] > temp)
                        {
                                a[j+1] = a[j]; 
                                j--  ;
                                
                         }
                         
                        else
                        {
                               a[j+1] = temp;
                               break;
                        } 
                                                                               
                }
                comp++;
                
                for(int i = 0;i<n; i++)
                {
                        cout<<a[i]<<" ";
                }  
                cout<<endl;                                                  
        }  
        
        cout<<"number of passes required are "<<comp<<endl;
        cout<<"sorted array by insertion sort is : ";
        for(int i = 0; i<n; i++)
        {
                cout<<a[i]<<" ";
        }  
        cout<<endl;

        cout<<"top five percentages are : ";
        int j=n-1;
       while(j>n-6)
        {
                cout<<a[j]<<" ";
                j--;
        }  
        cout<<endl;
}

void shellsort(float a1[], int n)
{
    cout<<"shell sort:";
    float a[n];

    int comp = 0;
        for(int i =0; i < n; i++)
       {
                a[i] = a1[i];
        }
    for (int i = n/2; i > 0; i /= 2)
    {
        for (int j = i; j < n; j++)
        {
            float temp = a[j];
            int k=j;            
            while ( k>= i && a[k - i] > temp )
                {
                        a[k] = a[k -i];
                        k -= i;
                }
                a[k] = temp;
        }
        comp++;
        cout<<"array after pass is :";
        for (int i=0; i<n; i++)
        {
                cout << a[i] << " ";
        }
        cout<<endl;
                
        }
        cout << "number of passes required is : "<<comp<<endl;
        cout<<"sorted array by shell sort is : ";
        for (int i=0; i<n; i++)
        {
              cout << a[i] << " ";
        }
        cout<<endl;

        cout<<"top five percentages are : ";
         int j=n-1;
       while(j>n-6)
        {
                cout<<a[j]<<" ";
                j--;
        }  
        cout<<endl;
}

int main()
{           
        int n;
        cout<<"enter the number of students : ";
        cin>> n;
                          
        float a[n];
        cout<<"enter the percentages of students : ";
        for(int i=0;i<n;i++)
        {
                cin>>a[i];
        }
        
        bubblesort(a,n);         
        selectionsort(a,n); 
        insertionsort(a,n); 
        shellsort(a, n);                                                                 
        return 0;     
}

