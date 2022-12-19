// DOUBLE QUEUE USING ARRAY

#include<iostream>
#include<stdio.h>
using namespace std;
int rear=-1 ,front=-1;
int A[100], n , i , choice=0;
void front_insert();
void rear_insert();
void front_delete();
void rear_delete();
void display();


int main(){
    cout<<"Enter the no of element :";
    cin>>n;

    while(choice!=6){
        cout<<" : Choose the Operation :";
        cout<<"\n 1. INSERT FROM FRONT \n 2. INSERT FROM REAR \n 3. DELETE FORM FRONT \n 4. DELETE FORM REAR \n 5. DISPLAY\n 6. EXIT "<<endl;
        cout<<"Enter your choice :";
        cin>>choice;
        switch(choice){
            case 1: front_insert();
                    break;
            case 2: rear_insert();
                    break;
            case 5: display();
                    break;
            case 3: front_delete();
                    break;
            case 4: rear_delete();
                    break;
            case 6: cout<<"Exiting the operation......";
        }
    }

}


void front_insert(){
    int item;
    cout<<"Enter the element :";
    cin>>item;

    if(front==rear+1 || front==0 && front==n-1){cout<<"Queue OverFlow";}
    if(front==-1 && rear==-1){
        front=rear=0;
        A[front]=item;
    }
    if(front==0){
        front=n-1;
        A[front]=item;
    }
    else{
        front=front-1;
        A[front]=item;
    }
}


void rear_insert(){
    int item;
    cout<<"Enter the element :";
    cin>>item;

    if(front==rear+1 || front==0 && front==n-1){cout<<"Queue OverFlow";}
    if(front==-1 && rear==-1){
        rear=0;
        A[rear]=item;
    }
    if(rear==n-1){
        rear=0;
        A[rear]=item;
    }
    else{
        rear=rear+1;
        A[rear]=item;
    }
}


void front_delete(){
    if(rear==-1 && front==-1){
        cout<<"Queue UnderFlow";
    }
    if(front==rear){
        rear=-1;
        front=-1;
    }
    if(front==n-1){
        front=0;
    }
    else{
        front=front+1;
    }
}


void rear_delete(){
    if(rear==-1 && front==-1){
        cout<<"Queue UnderFlow";
    }
    if(front==rear){
        rear=-1;
        front=-1;
    }
    if(rear==0){
        rear=n-1;
    }
    else{
        rear=rear-1;
    }
}


void display(){
    i=front;
    while(i!=rear){
        cout<<A[i]<<" ";
        i=(i+1)%n;
    }cout<<A[rear];
    cout<<endl;
}
