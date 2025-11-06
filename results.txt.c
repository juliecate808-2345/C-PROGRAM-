/*
NAME:Catherine Wamaitha Macharia 
REG:CT100/G/26195/25
DESCRIPTION:RESULTS.TXT
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    char reg_num[20];
    int total_marks;
} Student;

int main() {
    FILE *file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Failed to open results.dat\n");
        return 1;
    }

    Student student;
    printf("Student Results:\n");


    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printf("Name: %s, Marks: %d\n", student.name, student.total_marks);
    }

    fclose(file);
    return 0;
}