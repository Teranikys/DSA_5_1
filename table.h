//
// Created by Влад on 13/05/2023.
//

#ifndef DSA_5_1_TABLE_H
#define DSA_5_1_TABLE_H

#pragma once

#include "record.h"

struct Table {
    int n = 0;
    record data[N]{};

    void output_table();
    void delete_record();
    void insert_record();
    void subject_hours();
};

#endif //DSA_5_1_TABLE_H
