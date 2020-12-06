#include<iostream>



using namespace std;



int main(){

    double x = 11;

    int y = 5;
    y %= 3;

    x = 10;
    cout << x++ << endl; // 10
    // (1) Outputs x
    // (2) Increments x
    x = 10;
    cout << ++x << endl; // 11
    // (1) Increments x
    // (2) Outputs x



}