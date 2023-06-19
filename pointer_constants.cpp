#include <iostream>

using namespace std;
int main(){
    // consants and pointers 
    int highscore (100);
    int lowscore(65);
    //-----------pointer to constant------------
    const int *score_ptr = {&highscore};
    // *score_ptr =86; this will throw error as the pointer is pointing at a variable which should have constant value 
    score_ptr = &lowscore; // the pointer is allowed to point at some other address

    //---------constant pointers--------------
    int *const scores_ptr ={&highscore};
    *scores_ptr=86; //works 
    // scores_ptr =&lowscore; will throw error because the pointer itself is a constant

    //-----------constant pointers to constants 
    const int *const score_const ={&highscore};
    /*both 
    *score_const = 89;
    score_const =&lowscore
    will throw error because both pointer and values cant be changed */
    return 0;
}
