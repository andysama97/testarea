#include <iostream>
using namespace std;

float inputL() {
    float x;
    cout << "Enter beam's length = ";
    cin >> x;
    return x;
}

float inputW() {
    float x;
    cout << "Enter beam's width = ";
    cin >> x;
    return x;
}

float inputH() {
    float x;
    cout << "Enter beam's height = ";
    cin >> x;
    return x;
}

float volume(float l, float w, float h) {
    float v = l * w * h;
    return v;
}

void result(float l, float w, float h, float v) {
    cout << "Beam's Volume = L x W x H" << endl;
    cout << "Beam's Volume = " << l << " x " << w << " x " << h << endl;
    cout << "Beam's Volume = " << v;
}

int main() {
    float l = inputL(), w = inputW(), h = inputH(), v = volume(l, w, h);
    result(l,w,h,v);

    return 0;
}
