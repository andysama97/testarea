#include <iostream>
using namespace std;

int main() {
    string name, occupation, hobby;
    int age;

    cout << "your name : ";
    getline(cin, name);
    cout << "age : ";
    cin >> age;
    cout << "occupation : ";
    getline(cin >> ws, occupation);
    cout << "hobby : ";
    getline(cin, hobby);

    cout << "so you're name is " << name << ", you're " << age << " years old. \n";
    cout << "currently, you work as " << occupation <<". And you love " << hobby << ". \n";
    cout << "i like your data so far, i think you'll do just fine here. Welcome aboard!";

    return 0;
}
