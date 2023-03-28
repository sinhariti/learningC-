#include<iostream>
using namespace std;
//structures in c++
struct employee{
    int eID;
    string name;
    float salary;

};
//typedef makes a short form of "struct structure_name"
typedef struct classroom{
    int rollno;
    string name;
    string grade;
}c1 ;

//union - helps to optimise memory location, uses one of the parameters at a time.
union ids{
    int rollno;
    int id;
};

int main(){
    //a user-defined value type used to represent a list of named integer constants
    enum meal{
        breakfast, lunch, dinner
    };
    meal m1=lunch;//can assign a variable these enum values 
    cout<<breakfast;
    cout<<m1;
    struct employee Rishita;
    Rishita.eID= 10293;
    Rishita.name="Rishita";
    Rishita.salary=120000;
    cout<<"The value is "<<Rishita.eID<<endl;
    cout<<"The value is "<<Rishita.name<<endl;
    cout<<"The value is "<<Rishita.salary<<endl;
    c1 Riti;
    Riti.rollno=23;
    Riti.name="Riti";
    Riti.grade="A";
    cout<<"The value is "<<Riti.rollno<<endl;
    cout<<"The value is "<<Riti.name<<endl;
    cout<<"The value is "<<Riti.grade<<endl;
    //union application
    ids riti;
    riti.id=234;
    riti.rollno=3456;//if we try to define another variable then it overwrites the previous one.
    cout<<"The id is "<<riti.id<<endl;

}
