#include <iostream>
using namespace std;
int main(){
    cout<<"Franks carpet cleaning service"<<endl;
    cout<<"Estimate carpet cleaning service"<<endl;
    cout<<"\nNumber of small rooms :";
    int small_room=0;
    cin>>small_room;
    cout<<"Number of large rooms :";
    int large_room=0;
    cin>>large_room;
    double price_per_small_room = 25;
    cout<<"\nPrice per small room $"<<price_per_small_room<<endl;
    double price_per_large_room = 35;
    cout<<"Price per large room $"<<price_per_large_room<<endl;
    double cost=small_room*price_per_small_room+large_room*price_per_large_room;
    cout<<"Cost : $"<<cost<<endl;
    double tax_rate=0.06;
    cout<<"Tax : $"<<tax_rate<<endl;
    cout<<"--------------------------------------"<<endl;
    double final_amount=cost+cost*tax_rate;
    cout<<"Total Estimate : $"<<final_amount<<endl;
    int validity=30;
    cout<<"The total estimate valid for "<<validity<<" days."<<endl;
    return 0;
}
