#include <iostream>
#include <stdio.h>
using namespace std;
void PUSH();
void POP();
void PEEP();
void CHANGES();
void DISPLAY();
int A[100];
int top = -1;
int choice = 0;
int i , j , n;

// ---------------------------------------------------Main Container-----------------------------------------------------

int main(){
    cout<<"Enter the number of element you want to enter :";
    cin>>n;
    cout<<endl<<endl;
    cout<<":Stack Operation:"<<endl;
    while(choice!=6){
        cout<<"Choose the following Option:";
        cout<<"\n 1. PUSH \n 2. POP \n 3. PEEP \n 4. CHANGE \n 5. DISPLAY \n 6. EXIT"<<endl<<endl;
        cout<<"Enter the choice :";
        cin>>choice;
        cout<<endl;

        switch(choice){
            case 1: PUSH();
                    break;
            case 2: POP();  
                    break;
            case 3: PEEP();
                    break;
            // case 4: CHANGES();
            //         break;
            case 5: DISPLAY();
                    break;
            case 6: cout<<"Exiting the stack operation.....";
                    break;
            default : cout<<"Wrong Choice......";      
        }
    }

}

// ---------------------------------------------------PUSH Container-----------------------------------------------------

void PUSH(){
    int item;
        if(top==n){
            cout<<"Stack Overflow";
        }
        else{
            cout<<"Enter the element :";
            cin>>item;
            top++;
            A[top]=item;
            
        }
}


// ---------------------------------------------------POP Container-----------------------------------------------------

void POP(){
    if(top <= -1){
        cout<<"Stack UnderFlow";
    }
    else{
        top = top -1;
    }
}


// ---------------------------------------------------PEEP Container-----------------------------------------------------


void PEEP(){
    if(top <= -1){
        cout<<"Stack UnderFlow";
    }
    else{
        cout<<"Enter the Position :";
        cin>>i;
        cout<<"The Required Element :"<<A[top+j]; 
    }
    cout<<endl;
}



// ---------------------------------------------------CHANGES Container-----------------------------------------------------


void CHANGES(){
     int changeitem;
     if(top <= -1){
        cout<<"Stack UnderFlow";
    }
    else{
        cout<<"Enter the Position :";
        cin>>i;
        cout<<"Enter the new element :";
        cin>>changeitem;
        A[top+j]=changeitem;
    }
    cout<<endl;
}


// ---------------------------------------------------DISPLAY Container-----------------------------------------------------

void DISPLAY(){
    if(top<=-1){
        cout<<"Stack Underflow";
    }
    else{
        cout<<"The Stack Are :";
        for(i=0;i<=top;i++){
            cout<<A[i]<<" ";
        }
    }
    cout<<endl;
}
