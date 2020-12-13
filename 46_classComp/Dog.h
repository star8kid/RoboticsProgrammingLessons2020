#pragma once
#include <iostream>
#include "DogBreed.h"

using namespace std;

class Dog{
    public:
        Dog(int age, DogBreed breed);
        void print();

    private:
        int age;
        DogBreed breed;

};