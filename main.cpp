// Командный проект. Группа ПИ-54.
// Команда: Елунин (в. 21, техлид), Елунин (в. 26).
#include <iostream>
using namespace std;

// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "elunin1.h"
#include "elunin2.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

int main() {
    int choice;
    double v, f, lambda, T, v0, a, t, s, F, A;

    do {
        cout << "\n=== Командный проект: сборник расчётов ===\n";
        cout << "1. Distance (s = v * t)\n";
        cout << "2. Speed (v = s / t)\n";
        cout << "3. Travel time (t = s / v)\n";
        cout << "4. Mechanical work (A = F * s)";
        cout << "5. Power (N = A / t)";
        cout << "0. Exit\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter speed v: ";
                cin >> v;
                cout << "Enter the time t: ";
                cin >> t;
                cout << "Distance = " << distance(v, t) << "\n";
                break;
                
            case 2:
                cout << "Enter the distance s: ";
                cin >> s;
                cout << "Enter the time t: ";
                cin >> t;
                cout << "Speed = " << speed(s, t) << "\n";
                break;

                
            case 3:
                cout << "Enter the distance s: ";
                cin >> s;
                cout << "Enter speed v: ";
                cin >> v;
                cout << "Travel time = " << travelTime(s, v) << "\n";
                break;
            case 4:
                cout << "Enter the force F: ";
                cin >> F;
                cout << "Enter the distance s: ";
                cin >> s;
                cout << "Mechanical work = " << work(F, s) << "\n";
            case 5:
                cout << "Enter the Mechanical work A: ";
                cin >> A;
                cout << "Enter the time t: ";
                cin >> t;
                cout << "Power = " << power(A, t) << "\n";
            case 0:
                cout << "Работа завершена.\n";
                break;
            // === КОНЕЦ БЛОКА ОБРАБОТКИ ===
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}
