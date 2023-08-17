#include <iostream>
#include <fstream>
using namespace std;

bool isLoggedIn() {
    string username, password, un, pw;
    
    cout << "Enter username : ";
    cin >> username;
    cout << "Enter password : ";
    cin >> password;

    ifstream read("d:\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (username == un && password == pw) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int options;
    cout << "1 : Login\n2 : Register\nAnswer : ";
    cin >> options;

    if (options == 1) {
        bool status = isLoggedIn();
        if (status) {
            cout << "Succesfully logged in.. " << endl;
            system("PAUSE");
            return 1;
        } else {
            cout << "Incorrect username or password!" << endl;
            system("PAUSE");
            return 0;
        }
    } else if (options == 2) {
        string username, password;

        cout << "Create a username : ";
        cin >> username;
        cout << "Create a password : ";
        cin >> password;

        ofstream file;
        file.open("D:\\"+ username + ".txt");
        file << username << endl << password;
        file.close();

        main();
    } else {
        cout << "Incorrect command!" << endl;
        system("PAUSE");
        return 0;
    }
}
