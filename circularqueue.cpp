// CIRCULAR QUEUE USING ARRAY IMPLEMENTATION

#include<iostream>
#include<stdio.h>
using namespace std;
int A[100];
int rear=-1 , front =-1 , n , choice=0 , i;
void enqueue();
void dequeue();
void display();

int main(){
    cout<<"Enter the no of element :";
    cin>>n;
    while(choice!=4){
        cout<<" : Choose the Operation : ";
        cout<<"\n 1. ENQUEUE \n 2. DEQUEUE \n 3. DISPLAY \n 4. QUIT"<<endl;
        cout<<"Enter the choice :";
        cin>>choice;
        cout<<endl;

        switch(choice){
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: cout<<"Exiting the operation.......";
                    break;
        }
    }
}

void enqueue(){
    int item;
    cout<<"Enter the element :";
    cin>>item;
    if(rear==-1 && front==-1){front=rear=0;}
    if((rear+1)%n==front){cout<<"Queue OverFlow";}
    else{rear=(rear+1)%n; A[rear]=item;}
    
}

void dequeue(){
    int temp;

    if(front==-1 && front>rear){cout<<"Queue UnderFlow";}
    if(front==rear){front=rear=-1;}
    else{front=(front+1)%n;}
}


void display(){while(i<=rear){cout<<A[i]<<" ";i=(i+1)%n;}}
