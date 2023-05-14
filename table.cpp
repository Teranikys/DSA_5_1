//
// Created by Влад on 13/05/2023.
//

#include <iostream>
#include "table.h"

void Table::output_table() {
    if (n == 0){
        cout << "Таблица всё ещё пустая. Надо добавить хотя бы одну запись, чтобы её вывести.\n";
    } else {
        for (int i = 0; i < n; ++i) {
            data[i].output_record();
        }
    }
}

void Table::delete_record() {
    if (n == 0){
        cout << "Таблица всё ещё пустая. Надо добавить хотя бы одну запись, чтобы что-нибудь удалить.\n";
    } else {
        int subject_num;
        cout << "Занятия какого предмета вы хотите удалить из таблицы?\n";
        for (int i = 0; i < 5; ++i) {
            cout << subject_dict[i] << " " << i << '\n';
        }
        cout << "Напишите код предмета: ";
        cin >> subject_num;
        for (int i = 0; i < n; ++i) {
            if (data[i].subject_num == subject_num) {
                for (int j = i; j < n - 1; ++j) {
                    data[j] = data[j + 1];
                }
                n = n - 1;
            }
        }
    }
}

void Table::insert_record() {
    record new_record{};
    new_record.create_record();
    int i;
    for (i = 0; i < n; ++i){
        if (data[i].day == new_record.day){
            break;
        }
    }
    for (int j = n - 1; j >= i; --j){
        data[j + 1] = data[j];
    }
    data[i] = new_record;
    n = n + 1;
}

void Table::subject_hours() {
    if (n == 0){
        cout << "Таблица всё ещё пустая. Надо добавить хотя бы одну запись, чтобы посчитать количество часов.\n";
    } else {
        int lec_num = 0, sem_num = 0, lab_num = 0, prakt_num = 0;

        for (int i = 0; i < n; ++i) {
            switch (data[i].classtype_num) {
                case 0:
                    lec_num += 2;
                    break;
                case 1:
                    sem_num += 2;
                    break;
                case 2:
                    lab_num += 4;
                    break;
                case 3:
                    prakt_num += 2;
                    break;
            }
        }

        cout << "Количество часов лекций: " << lec_num << '\n';
        cout << "Количество часов практических занятий: " << sem_num << '\n';
        cout << "Количество часов лабораторных работ: " << lab_num << '\n';
        cout << "Количество часов практик: " << prakt_num << '\n';
    }
}
