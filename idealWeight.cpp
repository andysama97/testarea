#include <iostream>
using namespace std;

int identify() {
    int x;
    cout << "Specify your gender (1 for female, 2 for male) : ";
    cin >> x;
    return x;
}

void fem() {
    float height;
    cout << "Enter your height (cm) : ";
    cin >> height;
    float idealWeight = (height - 100) - ((height - 100)*15/100);
    cout << "Your ideal weight is " << idealWeight << " Kg.";
}

void male() {
    float height;
    cout << "Enter your height (cm) : ";
    cin >> height;
    float idealWeight = (height - 100) - ((height - 100)*10/100);
    cout << "Your ideal weight is " << idealWeight << " Kg.";
}

int main() {
    int gender = identify();

    if (gender == 1) {
        fem();
     } else if (gender == 2) {
        male();
     } else {
        cout << "Command unrecognizable. Aborting..";
     }
    
    return 0;
}
