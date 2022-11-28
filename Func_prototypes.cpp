#include<iostream>
using namespace std;
//Function prototype
//lets the complier know about function written after the main() func beforehand 
int sum (int a, int b); //--acceptable 
int sum(int a, b);//--unacceptable 
int sum (int, int);//accpetable ie no need to put arguments the complier only needs to know abt the datatypes being used in the agruments 


int main(){
    int n1,n2;
    cout<<"Enter the first number :"<<endl;
    cin>>n1;
    cout<<"Enter the second number :"<<endl;
    cin>>n2;
    cout<<"The sum is :"<<sum(n1,n2);
    return 0;
}
int sum(int a,int b){
    int c=(a+b);
    return c;
}
