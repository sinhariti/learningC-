#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    vector <int> vec1;
    vector <int> vec2;
    //adding values to the vector 1
    vec1.push_back(10);
    vec1.push_back(20);
    //printing the size and values of the vector 1
    cout<<"\nThe size of vec1 :"<<endl;
    cout<<vec1.size()<<endl;
    cout<<"The elements of the vector 1 are :"<<endl;
    cout<<vec1.at(0)<<" "<<vec1.at(1)<<endl;
    //adding values to the vector 2
    vec2.push_back(100);
    vec2.push_back(200);
    //printing the size and values of the vector 2
    cout<<"\nThe size of vec2 :"<<endl;
    cout<<vec2.size()<<endl;
    cout<<"The elements of the vector 2 are :"<<endl;
    cout<<vec2.at(0)<<" "<<vec2.at(1)<<endl;
    //2D vector 
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vec1);
    vector_2d.push_back(vec2);
    //changing value of vec1 
    vec1.at(0)=100;
    //displaying all elements of the 2D vector 
    cout<<"The elements of the 2D-vector are :"<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
    //elements of the vec1
    cout<<"\nThe elements of the vector 1 are :"<<endl;
    cout<<vec1.at(0)<<" "<<vec1.at(1)<<endl;
    return 0;
}
