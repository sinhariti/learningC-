#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    const int dollar_amount {100};
    const int quarter_amount {25};
    const int dimes_amount {10};
    const int nickel_amount {5};
    const int pennies_amount {1};
    int dollar {}, quarter {}, dimes {}, nickels {}, pennies {},cents {};
    cout<<"Enter the number of cents :";
    cin>>cents;
    dollar = cents/dollar_amount;
    cents -= dollar*dollar_amount;
    quarter= cents/quarter_amount;
    cents -= quarter * quarter_amount;
    dimes = cents/dimes_amount;
    cents -= dimes*dimes_amount;
    nickels=cents/nickel_amount;
    cents -= nickel_amount*nickels;
    pennies=cents/pennies_amount;
    cout<<"The amount is :"<<endl;
    cout<< "Dollars :"<<dollar<<endl;
    cout<< "Quarters :"<<quarter<<endl;
    cout<< "Nickels :"<<nickels<<endl;
    cout<< "Dimes :"<<dimes<<endl;
    cout<< "Pennies :"<<pennies<<endl;
    return 0;
}
