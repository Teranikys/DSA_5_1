//
// Created by Влад on 14/05/2023.
//

#include <iostream>
#include "table_vect.h"

void Table_vect::output_table() {
    if (data.empty()){
        cout << "Таблица всё ещё пустая. Надо добавить хотя бы одну запись, чтобы её вывести.\n";
    } else {
        cout << "Название | Артикул | Наименование | Ед. Изм. | Цена\n";
        for (auto & elem : data) {
            elem.output_record();
        }
    }
}

void Table_vect::insert_record() {
    record new_record{};
    new_record.create_record();
    data.insert(data.cbegin(), new_record);
}

int Table_vect::linear_search(int art) {
    for (int i = 0; i < data.size(); i++) {
        if (data[i].articul == art) {
            return i; // возвращаем индекс элемента
        }
    }
    return -1; // элемент не найден
}

int Table_vect::sentinel_search(int art) {
    unsigned int n = data.size();
    int last = data[n - 1].articul; // сохраняем последний элемент массива
    data[n - 1].articul = art; // устанавливаем барьер в конец массива
    int i = 0;
    while (data[i].articul != art) {
        i++;
    }
    data[n - 1].articul = last; // восстанавливаем последний элемент массива
    if (i < n - 1 || data[n-1].articul == art) {
        return i; // элемент найден
    } else {
        return -1; // элемент не найден
    }
}
