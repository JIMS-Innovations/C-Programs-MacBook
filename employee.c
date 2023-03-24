/**
 * @file employee.c
 * @author Jesutofunmi Kupoluyi(jimsufficiency@gmail.com)
 * @brief  This is a program that creates and uses an employee
 *         oriented data structure.
 * @version 0.1
 * @date 2023-03-24
 *
 * @copyright Copyright (c) 2023
 *
 */

/* Including necessary libraries */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct employee
{
    char name[32];
    int hireDate[3];
    float salary;
};

typedef struct employee employee_t;

int main(int argc, char const *argv[])
{
    employee_t Employee_1 = {"John Samuel", {1, 1, 2020}, 500};
    employee_t Employee_2;

    char buffer[64];

    printf("Please enter your name : ");
    scanf(" ");
    fgets(Employee_2.name, 32, stdin);

    printf("Please enter your hire date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &Employee_2.hireDate[0], &Employee_2.hireDate[1], &Employee_2.hireDate[2]);

    printf("Please enter your salary : ");
    scanf("%f", &Employee_2.salary);

    printf("Employee 1:\n\n\tName: %s\n\tHire Date: %d/%d/%d\n\tSalary: %.2f\n\n", Employee_1.name, Employee_1.hireDate[0], Employee_1.hireDate[1], Employee_1.hireDate[2], Employee_1.salary);
    printf("Employee 2:\n\n\tName: %s\tHire Date: %d/%d/%d\n\tSalary: %.2f\n\n", Employee_2.name, Employee_2.hireDate[0], Employee_2.hireDate[1], Employee_2.hireDate[2], Employee_2.salary);

    return 0;
}
