#include<iostream>

using namespace std;


int recursiveFactorial(int x){
    if (x == 1){
        return x;
    }
    else{
        return x * recursiveFactorial( x - 1 );
    }
}


int main(){
    cout << recursiveFactorial(4);
}