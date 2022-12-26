#include <bits/stdc++.h>
using namespace std;
class Queue{
	int *qu;
	int front,rear;
	int size;
	public:
	 Queue(int n){
		front=-1;
		rear=-1;
		size=n;
		qu=new int[size];
	}
	 void enQueue(int x){
		if((front==0 and rear==size-1) || (front-1)%(size-1)==rear){
			cout<<"queue is full";
		}
	    else if(front==-1){
	    	front=0;
	    	rear=0;
	    	qu[rear]=x;
	    }
	    else if(rear==size-1 and front!=0){
	    	rear=0;
	    	qu[rear]=x;
	    }
	    else{
	    	rear++;
	    	qu[rear]=x;
	    }
		
		
	}
	 void deQueue(){
		if(front==-1) {
			cout<<"queue is empty";
			return;}
		int data=qu[front];
		qu[front]=-1;
	    if(front==size-1){
			front=0;
		}
		else if(front==rear){
			front=-1;
			rear=-1;
		}
		else front++;
		cout<<"deleted element is:"<<data;
		
	}
	 void displayQueue(){
	    if(front==-1){
	        cout<<"queue is empty";
	        return;
	    }
		else if(rear>=front){
		for(int i=front;i<=rear;i++){
			cout<<qu[i]<<" ";
		}
		}
		else{
			for(int i=front;i<size;i++) cout<<qu[i]<<" ";
			for(int i=0;i<=rear;i++) cout<<qu[i]<<" ";
		}
		cout<<endl;
	}
};
int main()
{
    int size;
    cout<<"Enter the size of the queue : ";
    cin>>size;
	Queue q(size);
    int ch;
    do
    {
        cout << "\n\n----------------------MENU--------------------\n\n";
        cout << "1. Enqueue \n2. Dequeue \n3. Exit";
        cout<<"\nEnter your choice : ";
        cin >> ch;

	if(ch==1){
        int val;
        cout<<"Enter the entry to be added: ";
        cin>>val;
        q.enQueue(val);
        q.displayQueue();
    }
    else if(ch==2){
        q.deQueue();
        q.displayQueue();
    }
    } while (ch!=3);
    
    
	
	return 0;
}
