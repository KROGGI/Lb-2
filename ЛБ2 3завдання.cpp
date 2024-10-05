#include <iostream>

using namespace std;

int main() {
    setlocale(0, ".1251");
    int height;

    
    cout << "Введiть висоту трикутника: ";
    cin >> height;

    
    for (int i = 1; i <= height; ++i) { 
        for (int j = 1; j <= i; ++j) {  
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}
