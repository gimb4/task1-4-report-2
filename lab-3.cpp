#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double S;
    int N; 

    cout << "Введите исходную сумму вклада (в рублях): ";
    cin >> S;

    cout << "Введите количество лет: ";
    cin >> N;

    double finalAmount = S * (1 + 0.03 * N); 

    cout << "Сумма вклада через " << N << " лет составит: " << finalAmount << " рублей" << endl;

    return 0;

}
