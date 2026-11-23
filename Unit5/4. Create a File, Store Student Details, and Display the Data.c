#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main(void)
{
    struct Student s;
    FILE *file;
    int ch;
    int writeResult;
    int closeResult;

    printf("Enter roll number: ");
    if (scanf("%d", &s.rollNo) != 1)
    {
        fprintf(stderr, "Invalid roll number.\n");
        return 1;
    }

    printf("Enter name: ");
    if (scanf(" %49[^\n]", s.name) != 1)
    {
        fprintf(stderr, "Unable to read the name.\n");
        return 1;
    }

    if (getchar() != '\n')
    {
        fprintf(stderr, "Name is too long. Enter up to 49 characters.\n");
        return 1;
    }

    printf("Enter marks: ");
    if (scanf("%f", &s.marks) != 1)
    {
        fprintf(stderr, "Invalid marks.\n");
        return 1;
    }

    file = fopen("student.txt", "w");
    if (file == NULL)
    {
        fprintf(stderr, "Unable to open student.txt for writing.\n");
        return 1;
    }

    writeResult = fprintf(file, "Roll Number: %d\nName: %s\nMarks: %.2f\n",
                          s.rollNo, s.name, s.marks);
    closeResult = fclose(file);

    if (writeResult < 0 || closeResult == EOF)
    {
        fprintf(stderr, "Unable to save the student details.\n");
        return 1;
    }

    file = fopen("student.txt", "r");
    if (file == NULL)
    {
        fprintf(stderr, "Unable to open student.txt for reading.\n");
        return 1;
    }

    printf("\n----- Student Details Stored in File -----\n");

    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }

    if (ferror(file))
    {
        fprintf(stderr, "An error occurred while reading student.txt.\n");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}
