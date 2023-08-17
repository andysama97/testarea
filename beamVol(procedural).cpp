#include <iostream>
using namespace std;

int main() {
    float l, w, h;
    cout << "Enter beam's length = ";
    cin >> l;
    cout << "Enter beam's width = ";
    cin >> w;
    cout << "Enter beam's height = ";
    cin >> h;
    float v = l * w * h;
    cout << "Beam's Volume = L x W x H" << endl;
    cout << "Beam's Volume = " << l << " x " << w << " x " << h << endl;
    cout << "Beam's Volume = " << v;

    return 0;
}
