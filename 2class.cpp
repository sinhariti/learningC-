#include <iostream>
using namespace std;

//structures are not protected and can be directly accessed.
// if data needs to be held only then use structures
// classs is used when data and functions along with secutiry is needed
/*
Classes- have more methods and properties 
--> members are can be protected private or public 
--> methods and properties 
--> declare objects along with the class definition
*/
class employee
{
    private:// implies only the functions inside the class can access these private data.
        int a, b, c; //this data is private
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);  // function is only declared over here.
        void getdata(){
            cout<<"The value of a is:"<<a<<endl;
            cout<<"The value of b is:"<<b<<endl;
            cout<<"The value of c is:"<<c<<endl;
            cout<<"The value of d is:"<<d<<endl;
            cout<<"The value of e is:"<<e<<endl;
        } // can implment this outside the class also

};
void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1; 
    c=c1;
}
int main(){
// creating an object
    employee harry;
    //declaring values for public variables.
    harry.d=34;
    harry.e=45;
    //decalring values for private variables.
    //cannot set values of private data directly as only functions of that paritcular class can access such data.
    harry.setdata(1,2,4);
    harry.getdata();
    
    return 0;
}
