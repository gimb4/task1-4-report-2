#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    double value;
    int choice;

    cout << "Выберите тип перевода:\n";
    cout << "1. Сажени в метры\n";
    cout << "2. Дюймы в сантиметры\n";
    cout << "3. Футы в метры\n";
    cout << "4. Драхмы в граммы\n";
    cout << "5. Унции в граммы\n";
    cout << "6. Фунты в килограммы\n";
    cout << "7. Аршины в метры\n";
    cout << "8. Золотники в граммы\n";
    cout << "9. Дюймы в миллиметры\n";
    cout << "Введите номер выбранного типа перевода: ";
    cin >> choice;

    cout << "Введите значение для перевода: ";
    cin >> value;

    switch (choice) {
    case 1:
        cout << value << " сажень(и) равно " << value * 2.1366 << " метра(ов)\n";
        break;
    case 2:
        cout << value << " дюйм(ов) равно " << value * 2.5 << " сантиметра(ов)\n";
        break;
    case 3:
        cout << value << " фут(ов) равно " << value * 0.3048 << " метра(ов)\n";
        break;
    case 4:
        cout << value << " драхма(ы) равно " << value * 3.7325 << " грамма(ов)\n";
        break;
    case 5:
        cout << value << " унция(и) равно " << value * 29.86 << " грамма(ов)\n";
        break;
    case 6:
        cout << value << " фунт(ов) равно " << value * 0.40951 << " килограмма(ов)\n";
        break;
    case 7:
        cout << value << " аршин(а) равно " << value * 0.7112 << " метра(ов)\n";
        break;
    case 8:
        cout << value << " золотник(ов) равно " << value * 4.2657 << " грамма(ов)\n";
        break;
    case 9:
        cout << value << " дюйм(ов) равно " << value * 25.3995 << " миллиметра(ов)\n";
        break;
    default:
        cout << "Неверный выбор\n";
        break;
    }

    return 0;
}