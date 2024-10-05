#include <iostream>

using namespace std;

int main() {
    setlocale(0, ".1251");
    int N;

   
    cout << "Введiть число N: ";
    cin >> N;

    int even_sum = 0; 
    int odd_sum = 0;  
    int total_sum = 0;

    cout << "Парнi числа вiд 1 до " << N << ": ";

    
    for (int i = 1; i <= N; ++i) {
        total_sum += i;

        if (i % 2 == 0) {
            even_sum += i;
            cout << i << " ";
        }
        else {
            odd_sum += i;
        }
    }

    cout << endl;

    
    cout << "Сума парних чисел: " << even_sum << endl;
    cout << "Сума непарних чисел: " << odd_sum << endl;
    cout << "Загальна сума всiх чисел: " << total_sum << endl;

   
    double result = (even_sum + odd_sum + total_sum) / 2.0;
    cout << "Результат обчислень: " << result << endl;

    return 0;
}
