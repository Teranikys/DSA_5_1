//
// Created by Влад on 14/05/2023.
//

#include <iostream>
#include "table_vect.h"

void Table_vect::output_table() {
    if (data.empty()){
        cout << "Таблица всё ещё пустая. Надо добавить хотя бы одну запись, чтобы её вывести.\n";
    } else {
        for (auto & elem : data) {
            elem.output_record();
        }
    }
}

void Table_vect::delete_record() {
    if (data.empty()){
        cout << "Таблица всё ещё пустая. Надо добавить хотя бы одну запись, чтобы что-нибудь удалить.\n";
    } else {
        int subject_num;
        cout << "Занятия какого предмета вы хотите удалить из таблицы?\n";
        for (int i = 0; i < 5; ++i) {
            cout << subject_dict[i] << " " << i << '\n';
        }
        cout << "Напишите код предмета: ";
        cin >> subject_num;
        for (int i = 0; i < data.size(); ++i) {
            if (data[i].subject_num == subject_num) {
                data.erase(data.cbegin() + i);
                i--;
            }
        }
    }
}

void Table_vect::insert_record() {
    record new_record{};
    new_record.create_record();
    int i;
    for (i = 0; i < data.size(); ++i){
        if (data[i].day == new_record.day){
            break;
        }
    }
    data.insert(data.cbegin() + i, new_record);
}

void Table_vect::subject_hours() {
    if (data.empty()){
        cout << "Таблица всё ещё пустая. Надо добавить хотя бы одну запись, чтобы посчитать количество часов.\n";
    } else {
        int lec_num = 0, sem_num = 0, lab_num = 0, prakt_num = 0;

        for (auto & elem : data) {
            switch (elem.classtype_num) {
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