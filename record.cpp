//
// Created by Влад on 13/05/2023.
//

#include <iostream>
#include "record.h"

void record::create_record() {
    cout << "Введите номер группы, код дисциплины, день недели, \nномер пары, номер аудитории и код вида занятия через пробел\n";
    cin >> group_num >> subject_num >> day >> time_num >> classroom >> classtype_num;
}

void record::output_record() const {
    cout << "Номер группы: " << group_num << '\n';
    cout << "Дисциплина: " << subject_dict[subject_num] << '\n';
    cout << "День недели: " << day << '\n';
    cout << "Номер пары: " << time_num << '\n';
    cout << "Номер аудитории: " << classroom << '\n';
    cout << "Вид занятия: " << classtype_dict[classtype_num] << "\n\n";
}

