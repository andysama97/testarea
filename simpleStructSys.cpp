#include <iostream>
using namespace std;

struct cigs {
    string brand;
    int price;
};

cigs info() {
    cigs data;
    cout << "Brand = ";
    getline(cin >> ws, data.brand);
    cout << "Price = ";
    cin >> data.price;

    return data;
}

void enlisted(cigs data) {
    cout << "Brand : " << data.brand << ", Price : " << data.price << endl;
}

int main() {
    cigs data[3];
    int size = sizeof(data)/sizeof(data[0]);

    for (int x = 0; x < size; x++) {
        data[x] = info();
    }

    cout << "Enlisted brands : " << endl;

    for (int x = 0; x < size; x++) {
        enlisted(data[x]);
    }

    return 0;
}
