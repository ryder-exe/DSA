// LINEAR QUEUE USING ARRAY IMPLEMENTATION


#include <iostream>
#include <stdio.h>
using namespace std;
int A[100];
int i , n, rear=-1, front=-1 , choice=0;
void enqueue();
void dequeue();
void display();



//-----------------------------------------------MAIN CONTAINER ----------------------------------------------

int main(){
    cout<<"Enter the number of element want to enter: ";
    cin>>n;
    while(choice!=4){
        cout<<"Choose the following Operation:";
        cout<<"\n 1. Enqueue \n 2. Dequeue \n 3. Display \n 4. Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;

        switch(choice){
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: cout<<"Exiting the Operation.....";
                    break;
            default: cout<<"You Choosing the wrong operation.";
        }
    }

    return 0;

}



//-----------------------------------------------ENQUEUE CONTAINER ----------------------------------------------


void enqueue(){
    int item;
    cout<<"Enter the element : ";
    cin>>item;
    if(rear==n-1){
        cout<<"Queue OverFlow";
    }
    if(rear==-1 && front==-1){
        rear = 0;
        front = 0;
    }
    else{
        rear = rear + 1;
    }
    A[rear]=item;
}



//-----------------------------------------------DEQUEUE CONTAINER ----------------------------------------------

void dequeue(){
    int temp;
    if(front==-1 && front>rear){
        cout<<"Queue UnderFlow";
    }
    if(front==rear){
        front=rear=-1;
    }
    else{
        front = front+1;
        cout<<"\nElement Deleted";
    }
}



//-----------------------------------------------DISPLAY CONTAINER ----------------------------------------------

void display(){
    for(i=front;i<=rear;i++){
        cout<<A[i]<<" ";
    }cout<<endl;
}