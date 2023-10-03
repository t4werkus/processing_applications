#include "List.h"

int main() {
    setlocale(LC_ALL, "Russian"); // for windows
    int i = 10;
    string appointment;
    int number;
    string name;
    string date;
    List appointments;
    Applications appointment_after;
    while (i != 0) {
        cout << "Введите\n1 для добавления\n2 чтобы удалить\n3 для получения заявок по вашему номеру рейса и дате\n4 для вывода всех заявок\n0 для выхода\n";
        cin >> i;
        cin.ignore();
        if (i == 1) {
            cout << "Назначение пункт, дальше номер, Имя и инициалы, Дата" << endl;
            getline(cin, appointment);
            cin >> number;
            cin.ignore();
            getline(cin, name);
            getline(cin, date);
            appointment_after.set_appointment(appointment);
            appointment_after.set_number(number);
            appointment_after.set_name(name);
            appointment_after.set_date(date);
            appointments.push_back(appointment_after);
            cout << "Готово" << "\n";
        }
        if (i == 2) {
            cout << "Назначение пункт, дальше номер, Имя и инициалы, Дата\n";
            getline(cin, appointment);
            cin >> number;
            cin.ignore();
            getline(cin, name);
            getline(cin, date);
            appointment_after.set_appointment(appointment);
            appointment_after.set_number(number);
            appointment_after.set_name(name);
            appointment_after.set_date(date);
            appointments.remove(appointment_after);
            cout << "Готово" << "\n";
        }
        if (i == 3) {
            cout << "Номер и Дата\n";
            cin >> number;
            cin.ignore();
            getline(cin, date);
            appointments.find(number, date);
            cout << "Готово" << "\n";
        }
        if (i == 4) {
            cout << "Вывод всех имеющихся\n";
            appointments.display();
            cout << "Готово" << "\n";
        }
        else {
            cout << "Выход\n";
        }
    }
    return 0;
}


