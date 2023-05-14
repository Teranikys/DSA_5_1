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
    void delete_record();
    void insert_record();
    void subject_hours();
};


#endif //DSA_5_1_TABLE_VECT_H
