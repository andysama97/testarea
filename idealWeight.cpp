#include <iostream>
using namespace std;

int identify() {
    int x;
    cout << "Specify your gender (1 for female, 2 for male, 0 Abort application) : ";
    cin >> x;
    return x;
}

void fem() {
    float height;
    cout << "Enter your height (cm) : ";
    cin >> height;
    float idealWeight = (height - 100) - ((height - 100)*15/100);
    cout << "Your ideal weight is " << idealWeight << " Kg." << endl;
}

void male() {
    float height;
    cout << "Enter your height (cm) : ";
    cin >> height;
    float idealWeight = (height - 100) - ((height - 100)*10/100);
    cout << "Your ideal weight is " << idealWeight << " Kg." << endl;
}

int main() {
    int gender = identify();

    if (gender == 1) {
        fem();
        system("PAUSE");
        main();
     } else if (gender == 2) {
        male();
        system("PAUSE");
        main();
     } else if (gender == 0) {
        cout << "Aborting application . . " << endl;
        system("PAUSE");
        return 0;
     } else {
        cout << "Command unrecognizable" << endl;
        main();
     }
}
