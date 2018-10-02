#include<iostream>
#include<cstdlib>
#define size 5
using namespace std;
template<class type>
class queue{

	type a[size];
	int f,r;
	public:
			queue():f(-1),r(-1) {}
			void enqueue(type ele);
			void dequeue();
			void display();
			int isfull();
			int isempty();



};
template<class type>
void queue<type>::enqueue(type ele)
{
	if(isfull())
	{
		cout<<"QUEUE IS FULL!"<<endl;
		return;
	}
	if(r==-1)
	{
	    r=f=0;
	    a[r]=ele;
	}
	else a[++r]=ele;
}

template<class type>
int queue<type>::isfull()
{
   if(r==size-1)
    {
        int i=0;
        if(f==0)
        return 1;
        for( i=0;f+i<=r;i++)
            a[i]=a[f+i];
            f=0;
            r=i-1;
           
    }
	return 0;
}

template<class type>
int queue<type>::isempty()
{
return f==-1;
}

template<class type>
void queue<type>::dequeue()
{
	if(isempty())
	return ;
	type del=a[f];
	if(f==r) f=r=-1;
	else f++;
	cout<<"dequeued element: "<<del<<endl;
	//return del; 
	
}

template<class type>
void queue<type>::display()
{
	if(isempty())
	{
		cout<<"Empty queue!\n"<<endl;
		return;
	}
	for(int i=f;i<=r;i++)
		cout<<a[i]<<" ";
	cout<<endl;

}

