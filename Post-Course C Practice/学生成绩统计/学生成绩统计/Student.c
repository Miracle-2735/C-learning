#include "Student.h"

int countPass(struct Student s[], int n)

{
	int count = 0;
	for (int i = 0;i < n;i++) {
		if (s[i].score >= 60) {
			count++;
		}
	}
	return count;
}