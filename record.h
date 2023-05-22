//
// Created by Влад on 13/05/2023.
//

#ifndef DSA_5_1_RECORD_H
#define DSA_5_1_RECORD_H

#pragma once

#include <string>

using namespace std;

struct record {
    string name;
    int articul;
    string fullname;
    string unit;
    int cost;

    void create_record();
    void output_record() const;
};



#endif //DSA_5_1_RECORD_H
