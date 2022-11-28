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
int main(){
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

}
