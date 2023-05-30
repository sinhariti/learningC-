#include <iostream>
#include <string>
using namespace std;
int main() {
    //Encrypting the secret message.
    string aplha {"abcefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string keys {"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"};
    string data{};
    string encrypted_msg {};
    string decrypted_msg {};
    int option{};
    cout<<"Welcome to message translator."<<endl;
    do{
        cout<<"1. Encrypt message\n2. Decrypt message\n3. Quit\nChoose an option :";
        cin>>option;
        if (option ==1){
            cout<<"Enter the sentence you want to encrypt :";
            getline(cin,data);
            for (char c: data){
                size_t pos=aplha.find(c);
                if (pos== string::npos){
                    encrypted_msg+=c;
                }else{
                    char cipher_code {keys.at(pos)};
                    encrypted_msg+=cipher_code;
                }
            }
            cout<<"The secret code is :"<<encrypted_msg<<endl;
        }
        else if (option ==2){
            cout<<"Enter the sentence you want to decrypt :";
            cin>>data;
            for (char c: data){
                size_t pos=keys.find(c);
                if (pos== string::npos){
                    decrypted_msg+=c;
                }else{
                    char cipher_code {aplha.at(pos)};
                    decrypted_msg+=cipher_code;
                }
            }
            cout<<"The secret msg is :"<<encrypted_msg<<endl;
            
        }
        else if (option ==3){
            cout<<"Thanks for coming by!";
            break;
        }
        else{
            cout<<"Sorry, wrong input please try again.";
        }
    }while(option !=3);
    
    return 0;
}
