#include<stdio.h>
#include"student.c"
#include"student.h"

Student students[100];
int id=0;   

int main(){
    int opt;
    do {
        printf("Welcome to the Student Grade Management System (SGMS)\n");
        printf("1. Add Student\n2. Update Student\n3. Delete Student\n4. Update Grade\n5. View Student Database\n6. Exit\n");
        printf("\nChoose an option (1-6):\n");
        scanf("%d",&opt);   
        switch (opt)
        {
        case 1:
            students[id] = addStudent(id);
            id++;
            printStudents(students,id);
            break;
        case 2:
            int upOpt=0;
            printf("Enter the id of Student for Updatation: \n");
            printStudents(students,id);
            printf("> ");
            scanf("%d",&upOpt);
            students[upOpt] = updateStudent(upOpt,students);
            break;
        case 3:
            int delOpt=0;
            printf("Enter the id of Student for Deletion: \n");
            printStudents(students, id);
            printf("> ");
            scanf("%d",&delOpt);
            deleteStudent(students, delOpt, &id);
            break;
        case 4:
            int upOptdel=0;
            printf("Enter the id of Student for Grade Updation: \n");
            printStudents(students, id);
            printf("> ");
            scanf("%d",&upOptdel);
            students[upOptdel] = updateGrade(upOptdel, students);
            break;
        case 5:
            printStudents(students, id);
            printf("\n");
            break;
        case 6:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid option\n");
            printf("\n");
            break;
        }
    } while (opt != 6);
    return 0;
}