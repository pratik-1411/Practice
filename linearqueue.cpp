#include<iostream>
using namespace std;

class  queue
{
	int size;
	int arr[100];
	int rear,front;
	public:
		queue();
		queue(int);
		int remove();
		bool isfull();
		bool isempty();
		void insert(int);
		
};
queue::queue()
{
	size=5;
	rear=front=-1;
	
}
queue::queue(int s)
{
	size=s;
	rear=front=-1;
	
}
void queue::insert(int data)
{
	if(!isfull())
	{
		arr[++rear]=data;
	
	}
	else
		cout<<"!!!!!Overflow!!!!!!"<<endl;
		
			
}
int queue::remove()
{
	if(!isempty())
	{
		return arr[++front];
		
	}
	else
	{
	cout<<"!!!!Underflow!!!!"<<endl;
	return -1;
		
	}
}
bool queue::isfull()
{
	return rear==size-1;
	
}
bool queue::isempty() 
{
	return rear==front;
	
}

int main()
{
	queue q;
	int choice,data;
	while(true)
	{
		cout<<"1.Insert"<<endl<<"2.Remove"<<endl<<"3.Exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter element:";
				cin>>data;
				q.insert(data);
			break;
			case 2:
				cout<<q.remove()<<endl;
			break;
			case 3:
				exit(0);	
		}
	}
	return 0;
}
