#include<stdio.h>
#include"student.c"
#include"student.h"

int main(){
    Student students[100];
    int id=0;   
    printf("Welcome to the Student Grade Management System (SGMS)\n");
    printf("1. Add Student\n2. Update Student\n3. Delete Student\n4. Update Grade\n5. View Student Database\n6. Exit\n");
    printf("\nChoose an option (1-7):\n");
    int opt;
    scanf("%d",&opt);   
    switch (opt)
    {
    case 1:
        students[id] = addStudent(id);
        id++;
        break;
    
    default:
        break;
    }
    return 0;
}