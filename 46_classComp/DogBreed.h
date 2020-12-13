#pragma once
#include <iostream>
#include <string>

using namespace std;

class DogBreed{

    public:
        DogBreed(string name);
        string printBreed();
    private:
        string name;

};