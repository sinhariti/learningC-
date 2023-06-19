#include <iostream>

using namespace std;
int main(){
    int scores[] = {100, 95, 80}; //array of int
    cout<< "value of score :"<<scores<<endl; //prints the first value of the array
    int *score_ptr (scores); 
    //array names have addresses already present in it so array_name and pointers both point at thr same address
    cout<<"Value of the pointer :"<<score_ptr<<endl;
    cout<<"Array subscript notation :\n";
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;

    cout<<"Pointer subcript notation :\n";
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

//offset notation adds 1 implies that the address is increased according to the place where the next value is
    cout<<"Array offset notation :\n";
    cout<<*(scores)<<endl;
    cout<<*(scores+1)<<endl;
    cout<<*(scores+2)<<endl;

    cout<<"Pointer offfset notation :\n";
    cout<<*(score_ptr)<<endl;
    cout<<*(score_ptr+1)<<endl;
    cout<<*(score_ptr+2)<<endl;

    cout<<endl;
    return 0;
}
