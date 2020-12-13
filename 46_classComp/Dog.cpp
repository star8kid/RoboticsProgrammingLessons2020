#include <iostream>
#include <string>
#include "Dog.h"

using namespace std;

Dog::Dog(int age, DogBreed breed): age(age), breed(breed) {}

void Dog::print(){
    // cout << "The dog is a " << breed << " and its age is " << age;
    // cout << "The dog is a " << breed;
    cout << "The breed of this dog is "<< breed.printBreed() << " and its age is " << age;
}