#include<iostream>
#include<vector>
#include<string>


using namespace std;


int main(){

    struct Password{
        int minimum;
        int maximum;
        char policyCharacter;
        string password;
        Password(int tmin, int tmax, char policyChar, string tpassword){
            minimum = tmin;
            maximum = tmax;
            policyCharacter = policyChar;
            password = tpassword;
        }
    };

    vector<Password> passwords = {};
    char seperator;
    int tempMin,tempMax; char tempLetter; string tempPassword;
    while(true){
        bool isValidInput = bool (cin >> tempMin >> seperator >> tempMax >> tempLetter >> seperator >> tempPassword);
        Password pass = Password(tempMin,tempMax,tempLetter,tempPassword);
        passwords.push_back(pass);
        if(isValidInput == false){
            break;
        }
    }

    for (int a = 0; a < passwords.size(); a++){
        Password currentPass = passwords[a];
        int count = 0;
        for(int b = 0; b < currentPass.password.length(); b++){
            if(currentPass.password[b] == currentPass.policyCharacter){
                count++;
            }
        }
    }

}