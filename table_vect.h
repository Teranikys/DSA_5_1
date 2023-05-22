//
// Created by Влад on 14/05/2023.
//

#ifndef DSA_5_1_TABLE_VECT_H
#define DSA_5_1_TABLE_VECT_H


#pragma once

#include <vector>
#include "record.h"

struct Table_vect {
    vector<record> data;

    void output_table();
    void insert_record();
    int linear_search(int art);
    int sentinel_search(int art);
};


#endif //DSA_5_1_TABLE_VECT_H
