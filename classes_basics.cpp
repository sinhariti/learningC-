#include <vector>
#include <iostream>
#include <string>

//first class and objects initiation file 
using namespace std;

class Player{
public:
    //atttributes can be added 
    string player_name;
    int health;
    int xp;

    //methods - operations and functions can be added 
    // function prototypes  
    void talk(string text_to_say){
        cout<<player_name<<" says "<<text_to_say<<endl;
    };
    bool is_dead();
};
class Account {
public:
    string name;
    double balance;

    int deposit(double bal){
        balance+=bal;
        cout<<"In deposit"<<" Current balance :"<<balance<<endl;
        }
    int withdraw (double bal){balance-=bal;cout<<"In withdraw"<<" Current balance :"<<balance<<endl;}
};
int main(){
    Player frank; //initialising an object
    //setting value of the attributes in public classes.
    frank.player_name="Frank";
    frank.health=100;
    frank.xp=12;
    frank.talk("Hi"); //using a method
    /*
    Player *enemy = nullptr;
    enemy= new Player;
    delete enemy;
    */

    Player *enemy = new Player; //enemy is pointer to the player object
    (*enemy).player_name="AJ";
    (*enemy).health=20;
    enemy->xp=2; //assigning using arrow operator 

    enemy->talk("Ayo mates!");
    
    //class account 
    Account frank_account;
    frank_account.name="Frank's account";
    frank_account.balance=5000.0;

    frank_account.deposit(1000);
    frank_account.withdraw(500);
    return 0;
 }
