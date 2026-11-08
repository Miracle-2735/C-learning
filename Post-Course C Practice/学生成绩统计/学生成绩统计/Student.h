#ifndef __STUDENT_H
#define __STUDENT_H

struct Student {
    char name[20];
    float score;
};

int countPass(struct Student s[], int n);

#endif
