#include<iostream>
using namespace std;

//creating function

int fact(int n){ 
    if(n<=1){ //Terminating statement (Base Condition)
    return 1;
     }else{ 
        return (n*fact(n-1)); //Recursion 
        }

}

int main(){
    int X,n;
cout<<"Enter a number: ";
cin>>n;
X= fact(n); //Function calling
cout<<n<<"! = "<<X;
return 0;
}
