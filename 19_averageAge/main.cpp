#include<iostream>

using namespace std;




float averageAge(){

    float totalAge;
    float individualAge;
    float totalPeople;

    while (true){
        cout << "Input single age:";
        cin >> individualAge;
        if ( individualAge <= 0){
            break;
        }
        totalPeople++;
        totalAge += individualAge;
        
    }
    cout << endl;
    cout << totalAge/totalPeople << endl;
    return totalAge/totalPeople;

}


int main(){

    averageAge();


}