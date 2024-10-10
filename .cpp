#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;

    cout <<  "Кількість елементів масиву : ";
    cin >> a;

    int arr[1];
    cout << "Елементи масиву: ";
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += arr[i];
    }
    double average = (double)sum / a;

    int count = 0;
    for (int i = 0; i < a; i++) {
        if (arr[i] > average) {
            count++;
        }
    }

    cout << "Кількість елементів, що быльш за середнє арифметичне: " << count << endl;

    return 0;
}
