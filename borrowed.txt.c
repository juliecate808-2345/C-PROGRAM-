/*
NAME:Catherine Wamaitha Macharia 
REG:CT100/G/26195/25
DESCRIPTION:BORROWED.TXT
*/



#include <stdio.h>

int main() {
    char title[256];
    FILE *file;

    
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the book title to record: ");
    
    fgets(title, sizeof(title), stdin);


    fprintf(file, "%s", title);

    
    fclose(file);

    printf("Title successfully stored.\n");

    return 0;
}