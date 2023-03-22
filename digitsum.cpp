#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

int main() {
    //sum of digits in the number:
    int a,r;
    int sum=0;
    cout<<"Enter a number :";
    cin>>a;
    while (a!=0)
    {
        r=a%10;
        sum=sum+r;
        a=floor(a/10);
    }
    cout<<sum;
    
}
