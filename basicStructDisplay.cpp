#include <iostream>
using namespace std;

struct worker {
    string name;
    int age, wage;
};

worker enlisting() {
    worker data;

    cout << "Enter name : ";
    getline(cin >> ws, data.name);
    cout << "Specify age : ";
    cin >> data.age;
    cout << "Enter salary per month : ";
    cin >> data.wage;

    return data;
}

void outputW(worker data) {
    cout << "Name : " << data.name << endl;
    cout << "Age : " << data.age << endl;
    cout << "Salary : " << data.wage << endl;
}

int main() {
    worker data[10];
    int size = sizeof(data)/sizeof(data[0]);

    for (int x = 0; x < size; x++) {
        data[x] = enlisting();
    }

    for (int x = 0; x < size; x++) {
        outputW(data[x]);
    }

    return 0;
}
