#include <stdio.h>

// Structs Import
#include "student.h"

// Function Prototypes
Student addStudent(int);
Student updateStudent(Student);
void printStudents(Student arr[]);

// Functions Declarations
Student addStudent(int id){
    
    Student student1;
    student1.id = id;

    printf("Enter Student Name: ");
    scanf("%s\n",&student1.name);
    printf("Enter Student's Batch (eg - CSE-G): "); 
    scanf("%s\n",&student1.batch);
    printf("Enter Student's FOCP Marks: ");
    scanf("%f",&student1.focp);
    printf("Enter Student's PSDT Marks: ");
    scanf("%f",&student1.psdt);
    printf("Enter Student's Maths Marks: ");
    scanf("%f",&student1.maths);
    printf("Enter Student's Chemistry Marks: ");
    scanf("%f",&student1.chemistry);
    printf("Enter Student's EGD Marks: ");
    scanf("%f",&student1.egd);

    return student1;
}

Student updateStudent(Student stu){

}

void printStudents(Student arr[]){
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
            printf("%d\t",arr[i].id);
            printf("%s\t",arr[i].name);
            printf("%s\t",arr[i].batch);
            printf("%d\t",arr[i].focp);
            printf("%d\t",arr[i].psdt);
            printf("%d\t",arr[i].maths);
            printf("%d\t",arr[i].chemistry);
            printf("%d\t\n",arr[i].egd);
    }       
    
}