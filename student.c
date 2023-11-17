#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structs Import
#include "student.h"

// Function Prototypes
int addStudent();

// Functions Declarations
int addStudent(){
    
    // Seed the random number generator with the current time
    srand((unsigned int)time(NULL));

    struct student student1;
    student1.id = rand();

    printf("Enter Student Name: ");
    scanf("%s\n",&student1.name);
    printf("Enter Student's Batch (eg - CSE-G): "); 
    scanf("%s\n",&student1.batch);
}