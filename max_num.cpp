#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    //max of two numbers :
    int arr[5]={1,2,3,4,5};
    int max=0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    cout<<max;
    
}
