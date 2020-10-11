#include<iostream>


using namespace std;

class Animal{
    public:
        void makeSound(){
            cout << "Oink!" << endl;
        };


};


int main() {

    Animal pig;
    pig.makeSound();

    return 0;
}