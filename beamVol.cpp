#include <iostream>
using namespace std;

struct beam {
    float lenght, width, height;
};

beam specify() {
    beam data;
    cout << "Enter beam's length = ";
    cin >> data.lenght;
    cout << "Enter beam's width = ";
    cin >> data.width;
    cout << "Enter beam's height = ";
    cin >> data.height;

    return data;
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
    beam data = specify();
    float v = volume(data.lenght, data.width, data.height);
    result(data.lenght, data.width, data.height, v);

    return 0;
}
