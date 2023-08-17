#include <iostream>
using namespace std;

int inputC() {
    int x;
    cout << "Enter 1 to convert IDR to USD" << endl;
    cout << "Enter 2 to convert USD to IDR : ";
    cin >> x;
    return x;
}

void idrUsd() {
    float idr, usd;
    cout << "Enter your amount (IDR) : ";
    cin >> idr;
    usd = idr * 0.000066;
    cout << fixed << idr << " IDR = " << usd << " USD";
}

void usdIdr() {
    float idr, usd;
    cout << "Enter your amount (USD) : ";
    cin >> usd;
    idr = usd * 15231.95;
    cout << fixed << usd << " USD = " << idr << " IDR";
}

int main() {
    int cur = inputC();
    float idr, usd;

    if (cur == 1) {
        idrUsd();
    } else if (cur == 2) {
        usdIdr();
    } else {
        cout << "option unrecognizable";
    }

    return 0;
}
