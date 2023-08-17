#include <iostream>
using namespace std;

int inputC() {
    int x;
    cout << "Enter 1 to convert IDR to USD" << endl;
    cout << "Enter 2 to convert USD to IDR" << endl;
    cout << "Enter 0 to abort application" << endl;
    cout << "Answer : ";
    cin >> x;
    return x;
}

void idrUsd() {
    float idr, usd;
    cout << "Enter your amount (IDR) : ";
    cin >> idr;
    usd = idr * 0.000066;
    cout << fixed << idr << " IDR = " << usd << " USD" << endl;
}

void usdIdr() {
    float idr, usd;
    cout << "Enter your amount (USD) : ";
    cin >> usd;
    idr = usd * 15231.95;
    cout << fixed << usd << " USD = " << idr << " IDR" << endl;
}

int main() {
    int cur = inputC();

    if (cur == 1) {
        idrUsd();
        system("PAUSE");
        main();
    } else if (cur == 2) {
        usdIdr();
        system("PAUSE");
        main();
    } else if (cur == 0) {
        cout << "Aborting application . . " << endl;
        system("PAUSE");
        return 0;
    } else {
        cout << "Option unrecognizable" << endl;
        main();
    }
}
