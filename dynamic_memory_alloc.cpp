#include <iostream>
using namespace std;
int main(){
    int *int_ptr(nullptr); //*pointer_name can only have value null
    //the 'new int' has no variable name and is only connect throught the int_ptr pointer 
    //if the ppointer is lost we cannot access the new int value.
    int_ptr = new int ;//new - keyword ; int_ptr will store the address and value of int will be in the heap
    cout<<int_ptr<<endl;//display the member location of the int in the heap
    delete int_ptr ;//deletes the value in the heap

    //creating a block of variables
    size_t size (0);
    double *temp_ptr (nullptr);
    cout<<"how many temps? :"<<endl;
    cin>>size;
    temp_ptr= new double[size];
    cout<<temp_ptr<<endl;
    delete [] temp_ptr; //storage is free up again and connection to it is not lost
    
}
