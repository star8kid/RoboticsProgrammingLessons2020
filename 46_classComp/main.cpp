#include <iostream>
#include <string>
#include "DogBreed.h"
#include "Dog.h"

int main(){
    DogBreed breed = DogBreed("Corgi");
    Dog aSingleDog = Dog(15,breed);
    aSingleDog.print();
}
