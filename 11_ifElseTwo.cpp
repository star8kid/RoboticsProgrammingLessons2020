#include<iostream>
#include<string>


using namespace std;


string is_greater(int num1, int num2){

    if (num1 > num2){
        return "greater";
    }
    else if( num1 == num2){
        return "equal";
    }
    else{
        return "less";
    }


}


int main(){

    int a,b;
    cout << "Input a value for a: \n";
    cin >> a;
    cout << "Input a value for b: \n";
    cin >> b;
    cout << is_greater(a,b);

}