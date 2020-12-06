#include<iostream>
#include<string>


using namespace std;


void whatType(int someNumber){
    cout << "I ran because of an integer arguement!" << endl;
}

void whatType(string someString){
    cout << "I ran because of a string!" << endl;
}

int main(){
    whatType("ssssssssssssssssssss");
}