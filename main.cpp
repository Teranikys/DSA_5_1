#include <iostream>
#include "table.h"

int main() {
    Table table;

    while (true) {
        cout << "Меню\n";
        cout << "1. Заполнить запись о занятии\n";
        cout << "2. Вывести таблицу\n";
        cout << "3. Удалить запись по номеру дисциплины\n";
        cout << "4. Вывод количества часов по каждому виду занятия\n";
        cout << "5. Завершить работу\n";
        int flag;
        cin >> flag;
        switch (flag) {
            case 1:
                table.insert_record();
                break;
            case 2:
                table.output_table();
                break;
            case 3:
                table.delete_record();
                break;
            case 4:
                table.subject_hours();
                break;
            case 5:
                cout << "Выход из программы...";
                exit(1);
            default:
                cout << "Возможно, вы ввели некорректный номер команды.\nПовторите попытку)\n";
        }
    }
}
