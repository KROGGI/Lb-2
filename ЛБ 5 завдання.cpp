#include <iostream>
using namespace std;

int main() {
    setlocale(0, ".1251");
    int grade;

    // Запитуємо оцінку студента
    cout << "Введiть оцiнку студента (від 0 до 100): ";
    cin >> grade;

    // Перевіряємо діапазон оцінок і виводимо відповідну характеристику
    if (grade >= 90 && grade <= 100) {
        cout << "Вiдмiнно" << endl;
    }
    else if (grade >= 75 && grade < 90) {
        cout << "Добре" << endl;
    }
    else if (grade >= 60 && grade < 75) {
        cout << "Задовiльно" << endl;
    }
    else if (grade >= 0 && grade < 60) {
        cout << "Незадовiльно" << endl;
    }
    else {
        // Якщо введене значення не входить в діапазон від 0 до 100
        cout << "Некоректна оцiнка. Введiть значення вiд 0 до 100." << endl;
    }

    return 0;
}
