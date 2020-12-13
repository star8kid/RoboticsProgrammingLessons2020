#include <iostream>
#include <string>


using namespace std;



class Cat{
    private:
        string name;

    public:   
  
        Cat(string objectName){
            this->name = objectName;
        }

        void saysMeow(){
            cout << name << " says " <<"MeoowW!!" << endl;
        }
};


int main(){

    Cat kittyM = Cat("Kitty M");
    kittyM.saysMeow();



}