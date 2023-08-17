#include <iostream>
using namespace std;

struct worker {
    string name;
    int age, wage;
};

struct company {
    string compName;
    worker ceo;
    string field;
    int maxWorker;
};

company prof() {
    company rasen = {"Rasen Multicreative", {"Andy White", 26, 78000000}, "Construction", 25};

    return rasen;
}

worker enlisting() {
    worker data;

    cout << "Enter name : ";
    getline(cin >> ws, data.name);
    cout << "Specify age : ";
    cin >> data.age;
    cout << "Approved salary per month : ";
    cin >> data.wage;

    return data;
}

void outputP(company data) {
    cout << "Company's Profile" << endl << endl;
    cout << "Name : " << data.compName << endl;
    cout << "Field : " << data.field << endl;
    cout << "Active Workers : " << data.maxWorker << endl << endl;
}

void outputC(company data) {
    cout << "CEO's Profile" << endl << endl;
    cout << "Name : " << data.ceo.name << endl;
    cout << "Age : " << data.ceo.age << endl;
    cout << "Income : " << data.ceo.wage << endl << endl;
}

void outputW(worker data) {
    cout << "Enlisted worker" << endl << endl;
    cout << "Name : " << data.name << endl;
    cout << "Age : " << data.age << endl;
    cout << "Salary : " << data.wage << endl;
}

int main() {
    worker data[3];
    company rasen = prof();
    int size = sizeof(data)/sizeof(data[0]);

    cout << "Welcome, New recruits!" << endl;
    cout << "Please fill these form to complete your contract" << endl << endl;

    for (int x = 0; x < size; x++) {
        data[x] = enlisting();
    }

    cout << endl << endl << "Congratulations! you are now an offial member of our company" << endl << endl;

    outputP(rasen);
    outputC(rasen);
    for (int x = 0; x < size; x++) {
        outputW(data[x]);
    }

    return 0;
}
