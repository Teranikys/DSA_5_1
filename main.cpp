#include <iostream>
#include "table_vect.h"

int main() {
    Table_vect table;
    int art;
    int index;

    while (true) {
        cout << "Меню\n";
        cout << "1. Заполнить запись о занятии\n";
        cout << "2. Вывести таблицу\n";
        cout << "3. Линейный поиск\n";
        cout << "4. Поиск с барьером\n";
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
                cout << "Введите артикул товара, который хотите найти: ";
                cin >> art;

                index = table.linear_search(art);

                if (art != -1) {
                    table.data[index].output_record();
                } else {
                    cout << "Запись не найдена\n";
                }
                break;
            case 4:
                cout << "Введите артикул товара, который хотите найти: ";
                cin >> art;

                index = table.sentinel_search(art);

                if (art != -1) {
                    table.data[index].output_record();
                } else {
                    cout << "Запись не найдена\n";
                }
                break;
            case 5:
                cout << "Выход из программы...";
                exit(1);
            default:
                cout << "Возможно, вы ввели некорректный номер команды.\nПовторите попытку)\n";
        }
    }
}
