//
// Created by Влад on 13/05/2023.
//

#include <iostream>
#include "record.h"

void record::create_record() {
    cout << "Введите название, артикул, наименование, единицу измерения и цену через пробел\n";
    cin >> name >> articul >> fullname >> unit >> cost;
}

void record::output_record() const {
    cout << name << "\t\t" << articul << "\t\t" << fullname << "\t\t\t\t" << unit << "\t\t\t" << cost << '\n';
}

