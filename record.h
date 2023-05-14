//
// Created by Влад on 13/05/2023.
//

#ifndef DSA_5_1_RECORD_H
#define DSA_5_1_RECORD_H

#pragma once

#include <string>

using namespace std;

const int N = 100;
const std::string subject_dict[5] = {
        "Data Structures",
        "OOP",
        "Analysis",
        "Linear Algebra",
        "Discrete Math"
};

const std::string classtype_dict[4] = {
        "лекция - 2",
        "практическое занятие - 2",
        "лабораторная работа - 4",
        "практика - 2"
};

struct record {
    int group_num;
    int subject_num;
    int time_num;
    int classroom;
    int classtype_num;
    int day;

    void create_record();
    void output_record() const;
};



#endif //DSA_5_1_RECORD_H
