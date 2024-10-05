#include <iostream>

using namespace std;

int main() {
    setlocale(0, ".1251");
    int startYear, endYear;

    
    while (true) {
        cout << "Введiть початковий рiк (наприклад, 1976): ";
        cin >> startYear;
        cout << "Введiть кiнцевий рiк (наприклад, 2010): ";
        cin >> endYear;

        if (startYear > endYear) {
            cout << "Помилка: Початковий рiк не може бути бiльшим за кiнцевий рiк. Спробуйте ще раз." << endl;
        }
        else {
            break;
        }
    }

    cout << "Початковий рiк: " << startYear << endl;
    cout << "Кiнцевий рiк: " << endYear << endl;

    int yearsPassed = endYear - startYear;
    int countEveryTenth = 0;

    
    for (int year = startYear; year <= endYear; ++year) {
       
        if ((year - startYear + 1) % 10 == 0) {
            countEveryTenth++;
        }

        
        if (year - startYear >= 100) {
            cout << "Пройшло бiльше нiж 100 рокiв, вихiд з циклу." << endl;
            break;
        }
    }

    
    cout << "Загальна кiлькiсть рокiв мiж " << startYear << " i " << endYear << ": " << yearsPassed << endl;
    cout << "Кiлькiсть кожних десятих рокiв у дiапазонi: " << countEveryTenth << endl;

    return 0;
}
