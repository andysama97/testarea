#include <iostream>
using namespace std;

int choice() {
    int x;
    cout << "1 = Day to Month" << endl;
    cout << "2 = Month to Day" << endl;
    cout << "0 = Abort program" << endl;
    cout << "Answer = " << endl;
    cin >> x;

    return x;
}

int generate() {
    int x;
    cout << "Your income = ";
    cin >> x;

    return x;
}

void convDay(int x) {
    int y = x * 30;
    cout << "Your income estimated around " << y << " per month" << endl; 
}

void convMon(int x) {
    int y = x / 30;
    cout << "Your income estimated around " << y << " per day" << endl; 
}

int main() {
    int option = choice();

    if (option == 1) {
        int income = generate();
        convDay(income);
        system("PAUSE");
        main();
    } else if (option == 2) {
        int income = generate();
        convMon(income);
        system("PAUSE");
        main();
    } else if (option == 0) {
        cout << "Aborting program.." << endl;
        system("PAUSE");
        return 0;
    } else {
        cout << "Unknown command" << endl;
        system("PAUSE");
        main();
    }

}
