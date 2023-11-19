#include <stdio.h>
#include <stdlib.h>

// Structs Import
#include "student.h"

// Function Prototypes
Student addStudent(int);
Student updateStudent(int id,Student arr[]);
void printStudents(Student arr[],int size);
void deleteStudent(Student students[], int id, int *size);

// Functions Declarations
Student addStudent(int id){
    Student student1;
    student1.id = id;

    printf("Enter Student Name: ");
    scanf("%s", student1.name);
    printf("\n");
    printf("Enter Student's Batch (eg - CSE-G): "); 
    scanf("%s", student1.batch);
    printf("\n");
    printf("Enter Student's FOCP Marks: ");
    scanf("%f", &student1.focp);
    printf("\n");
    printf("Enter Student's PSDT Marks: ");
    scanf("%f", &student1.psdt);
    printf("\n");
    printf("Enter Student's Maths Marks: ");
    scanf("%f", &student1.maths);
    printf("\n");
    printf("Enter Student's Chemistry Marks: ");
    scanf("%f", &student1.chemistry);
    printf("\n");
    printf("Enter Student's EGD Marks: ");
    scanf("%f", &student1.egd);
    printf("\n");
 
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
        scanf("%s",&upStudnet.name);
        printf("\n");
        break;
    case 2:
        printf("Enter the Updated Batch: ");
        scanf("%s",&upStudnet.batch);
        printf("\n");
        break;
    default:
        break;
    }
    return upStudnet;

}

void printStudents(Student arr[], int size){
    printf("%-10s%-20s%-20s%-10s%-10s%-10s%-10s%-10s\n", "ID", "Name", "Batch", "FOCP", "PSDT", "Maths", "Chemistry", "EGD");
    for (int i = 0; i < size; i++)
    {
        printf("%-10d%-20s%-20s%-10.2f%-10.2f%-10.2f%-10.2f%-10.2f\n", arr[i].id, arr[i].name, arr[i].batch, arr[i].focp, arr[i].psdt, arr[i].maths, arr[i].chemistry, arr[i].egd);
    }       
}

void deleteStudent(Student students[], int id, int *size) {
    if (id < 0 || id >= *size) {
        printf("Invalid ID\n");
        return;
    }

    for (int i = id; i < *size - 1; i++) {
        students[i] = students[i + 1];
    }

    (*size)--;
}