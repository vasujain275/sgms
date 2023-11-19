#include <stdio.h>

// Structs Import
#include "student.h"

// Function Prototypes
Student addStudent(int);
Student updateStudent(int id,Student arr[]);
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

Student updateStudent(int id,Student arr[]){
    Student upStudnet = arr[id];
    int updateOptions;
    printf("What field you want to update?: ");
    printf("1. Name\n2. Batch\n> ");
    scanf("%d",&updateOptions);
    switch (updateOptions)
    {
    case 1:
        printf("Enter the Updated name: ");
        scanf("%s\n",&upStudnet.name);
        break;
    case 2:
        printf("Enter the Updated Batch: ");
        scanf("%s\n",&upStudnet.batch);
        break;
    default:
        break;
    }
    return upStudnet;

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