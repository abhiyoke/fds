#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define ha "YES"
#define na "NO"
#define fo(i,a,b) for(int i=a;i<b;i++)
#define arrin int n;cin>>n;vector<int> a(n);for(int i=0;i<n;i++)cin>>a[i];
#define sumarr int sum=0;for(int i=0;i<n;i++)sum+=a[i];
#define forloop for(int i=0;i<n;i++)
#define allr(v) (v).rbegin(),(v).rend()
#define vi vector <int>
#define set_bits __builtin_popcountll
#define mp map<int,int>
#define pb push_back
#define po pop_back
#define int long long
#define endl "\n"
#define F first
#define S second
#define mod 1e9 + 7
#define inf 1e15
#define n 10
class queu{
	int q[n];
	int front,rear;
	public:
	queu(){
		front=-1;
		rear=-1;
	}
	void enque(int x){
		if(front==-1) front++;
		if(rear==n-1){
			 cout<<"queue overflow"<<endl;
			 cout<<endl;
			 }
		rear++;
		q[rear]=x;
		
	}
	void deque(){
		if(front==-1 || front>rear) {
			cout<<"queue is empty";
			return;}
	    front++;	
	}
	void display(){
		for(int i=front;i<=rear;i++){
			cout<<q[i]<<" ";
		}
		cout<<endl;
	}
};
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int x; cin>>x;
   queu o;
   o.enque(x);
   o.enque(x);
   o.deque();
   o.display();
   
return 0;    
}
