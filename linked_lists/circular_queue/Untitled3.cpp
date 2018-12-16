#include <iostream>
#include <stdlib.h>
#include <process.h>

using namespace std;

int insert_in_cq( int[] , int );
void display( int[] , int , int );
int del_in_cq( int cqueue[] );

const int size = 5;
int cqueue[size], front= -1, rear= -1;

int main(){
	int item, res, ch;
	do{
		system("cls");
		cout<<"\t\t\t Circular Queue Menu \n";
		cout<<"\t1.Insert \n";
		cout<<"\t2.Delete \n";
		cout<<"\t3. Display \n";
		cout<<"\t4. Exit \n";
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\nEnter ITEM for insertion: ";
				cin>>item;
				res = insert_in_cq( cqueue , item );
				if( res == -1 ){
					cout<<"OVERFLOW!!!\n";	
				}
				else{
					cout<<"\n Now the CIr_Queue is: \n";
					display( cqueue, front, rear );	
				}
				system("pause");
				break;
			case 2:
				item = del_in_cq ( cqueue );
				cout<<"Element deleted is: "<<item<<endl;
				display( cqueue, front, rear);
				system("pause");
				break;
			case 3:
				display( cqueue, front, rear);
				system("pause");
				break;
			case 4:
				break;
			default:
				cout<<"Valid choices are 1-4 onl. \n";
				system("pause");
				break;
		}
	} while (ch!=4);
	return 0;
}

int insert_in_cq( int cqueue[], int ele ){
	if( ( ( front==0 ) && ( rear==(size-1) ) ) || ( front == rear+1 ) ){
		return -1;
	}
	else if( rear == -1 ){
		front = rear = 0;	
	}
	else if( rear == size-1 ){
		rear = 0;	
	}
	else{
		rear++;	
	}
	cqueue[rear] = ele;
	return 0;
}

void display( int cqueue[], int front, int rear ){
	int i=0;
	cout<<"\n Cir_Queue is: \n";
	cout<<"( front shown as >>, rear as <<< and free space as - )\n";
	if( front == -1 ){
		return;	
	}
	if( rear >= front ){
		for( i=0 ; i<front; i++ ){
			cout<<"-";
		}
		cout<<">>>";
		for( i=front ; i<rear; i++ ){
			cout<<cqueue[i] << "<-";	
		}
		cout<<cqueue[rear]<<"<<<"<<endl;
	}
	else{
		for( i=0 ; i<rear ; i++ ){
			cout<<cqueue[i]<<"<-";
		}
		cout<<cqueue[rear]<<"<<<";
		for( ; i<front ; i++ ){
			cout<<"-";	
		}
		cout<<">>>";
		for( i=front ; i<size ; i++){
			cout<<cqueue[i]<<"<-";	
		}
		cout<<"\t...wrap around...";
	}
}

int del_in_cq( int cqueue[] ){
	int ret;
	if( front == -1 ){
		return -1;
	}
	else{
		ret = cqueue[front];
		if( front == rear ){
			front = rear =-1;
		}
		else if( front == size-1 ){
			front = 0;	
		}
		else{
			front++;	
		}
	}
	return ret;
}
