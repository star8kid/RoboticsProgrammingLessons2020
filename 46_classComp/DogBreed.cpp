#include "DogBreed.h"
#include <iostream>
#include <string>

using namespace std;

DogBreed::DogBreed(string name): name(name) 
{}

string DogBreed::printBreed(){
    return name;
}