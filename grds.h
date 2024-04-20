#include <stdio.h>
#ifndef GRDS_DOT_H
#define GRDS_DOT_H
struct details {
    char *name;
    int rollno;
    int sem;
};

int fun(int m) {
    struct details students[] = {
        {"Abhi", 1, 2},
        {"Anu", 2, 2},
        {"Amith", 3, 2},
        {"Arya", 4, 2},
        {"Krithi", 5, 2},
        {"Ritu", 6, 2},
        {"Raha", 7, 2},
        {"Roy", 8, 2},
        {"Riya", 9, 2},
        {"Smrithi", 10, 2}
    };

    if (m < 1 || m > 10) {
        printf("Invalid roll number\n");
        return -1;
    }

    struct details student = students[m - 1];
    printf("Name: %s\nRoll No.: %d\nSemester: %d\n", student.name, student.rollno, student.sem);
    return 0;
}

#endif