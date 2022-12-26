#include <bits/stdc++.h>
using namespace std;
void linsearch(int a[],int n,int x){
	int f=1;
for(int i=0;i<n;i++){
	if(a[i]==x){
		f=0;
		break;
	}
}
if(f==0) cout<<"element found by linear search";
else cout<<"element not found by linear search";
}
void binsearch(int a[],int n,int x){
int l=0,h=n-1;
int f=1;
while(l<=h){
	int mid=(l+h)/2;
	if(x==a[mid]){
	  f=0;
	  break;
	}
	else if(x>a[mid]){
		l=mid+1;
	}
	else{
		h=mid-1;
	}
}
if(f==0) cout<<"element found by binary search";
else cout<<"element not found by binary search";
}
void sentinelsearch(int a[], int n, int x)
{
    int l=a[n - 1]; // last element of the array
    a[n - 1]=x;  // element to be searched is placed at the last index
    int i = 0;
    while (a[i]!= x){
        i++;
        }
    a[n - 1] = l;       // Put the last element back
    if(i<(n-1) or (a[n - 1] == x))
      cout<<"element found by sentinel search";
    else
     cout << "element not found by sentinel search";
}
void fibsearch(int a[],int n,int x)
{
    // Initialize fibonacci numbers
    int f2 = 0; 
    int f1 = 1;
    int f = f2+f1; 
   
    while(f<n) {
        f2=f1;
        f1=f;
        f=f2+f1;
    }
    int offset = -1;  // mark the eliminated range from front
    while(f>1) {  // check if f2 is a valid location
        int i = min(offset+f2,n-1);
        if (a[i] < x) {
            f=f1;
            f1=f2;
            f2=f-f1;
            offset=i;
        }
   
        else if (a[i]>x) {
            f=f2;
            f1=f1-f2;
            f2=f-f1;
        }
        else
            f=0;
    }
   
  
    if (f1 && a[offset+1]==x)   // comparing the last element with x
       f=0;
   if(f==0) cout<<"element found by fibonacci search";
   else cout<<"element not found by fibonacci search";
}
int main() {
int n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
linsearch(a,n,x);
cout<<endl;
binsearch(a,n,x);
cout<<endl;
sentinelsearch(a,n,x);
cout<<endl;
fibsearch(a,n,x);
return 0;    
}
