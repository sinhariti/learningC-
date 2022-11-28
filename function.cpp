#include<iostream>
//creating a function 
using namespace std;
//defining the function
int sum(int a,int b){
    int c=(a+b);
    return c;
}
int main(){
    int n1,n2;
    cout<<"Enter the first number :"<<endl;
    cin>>n1;
    cout<<"Enter the second number :"<<endl;
    cin>>n2;
    cout<<"The sum is :"<<sum(n1,n2);//calling the function.
    return 0;
}
