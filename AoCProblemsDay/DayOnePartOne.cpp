#include<iostream>
#include<vector>
#include<fstream>

using namespace std;


int main(){

    int temp;
    vector<int> inputList = {};


    while(true){
        // Can pipe in the input.txt using "<" in the gitbash terminal.
        bool is_valid_input = bool (cin >> temp);
        inputList.push_back(temp);
        if (is_valid_input == false){
            break;
        }
    }

    for(int a = 0; a < inputList.size(); a++){
        int firstElement = inputList[a];
        for (int b = a + 1; b < inputList.size(); b++){
            int secondElement = inputList[b];
            if((firstElement + secondElement) == 2020){
                cout << firstElement * secondElement;
                break;
            }
        }
    }
}