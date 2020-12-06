#include<iostream>

using namespace std;

int squareArray[5] = {1 , 4 , 9 , 16 , 25};

int main(){

    int requestedIndex;
    cout << "What perfect square would you like to see?\n";
    cin >> requestedIndex;
    cout << squareArray[requestedIndex] << endl;

}

