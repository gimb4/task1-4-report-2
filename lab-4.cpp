#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL,"Russian");
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i*18;
        
        
    }

    cout << "Ответ: " << sum << endl;

    return 0;
}