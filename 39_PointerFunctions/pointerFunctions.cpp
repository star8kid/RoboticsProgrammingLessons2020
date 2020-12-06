#include<iostream>

using namespace std;

int passByValue(int val){
    val = 99;
    return val;
};

int passByReference(int &val){
    val = 99;
    return val;
}

int passByPointer(int* val){
    *val = 99;
    return *val;
}

// int* = pointer type
// int& = reference type /alias

int main(){



}
