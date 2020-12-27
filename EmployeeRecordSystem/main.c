//
//  main.c
//  Employee
//
//  Created by Zarmina Ali on 14/12/2020.
//  Copyright © 2020 Zarmina Ali. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define FILE_NAME  "EmployeeRecordSystem.bin"

typedef struct
{
    int year;
    int month;
    int date;
} Date;

typedef struct
{
    char fatherName[50];
    char employeeName[50];
    char employeeAddr[300];
    Date employeeJoiningDate;
    unsigned int employeeId;
    float employeeSalary;
} Employee;

void printMessageCenter(const char* message)
{
    int len =0;
    int pos = 0;
    
    len = (78 - strlen(message))/2;
    printf("\t\t\t");
    for(pos =0 ; pos < len ; pos++)
    {
        printf(" ");
    }
    
    printf("%s",message);
}

void headMessage(const char *message)
{
    printf("\n\t\t\t⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️");
    printf("\n\t\t\t⚜️                                                                         ⚜️");
    printf("\n\t\t\t⚜️                          EMPLOYEE RECORD SYSTEM                         ⚜️");
    printf("\n\t\t\t⚜️                                                                         ⚜️");
    printf("\n\t\t\t⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️⚜️\n");
    printf("\n\t\t\t⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯\n");
    printMessageCenter(message);
    printf("\n\t\t\t⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯");
}

void welcomeMessage()
{
    printf("\n\n\n\n\n");
    printf("\n\t\t\t\t          ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ");
    printf("\n\t\t\t\t          ⚜️                                           ⚜️");
    printf("\n\t\t\t\t          ⚜️                   WELCOME                 ⚜️");
    printf("\n\t\t\t\t          ⚜️                     TO                    ⚜️");
    printf("\n\t\t\t\t          ⚜️               EMPLOYEE RECORD             ⚜️");
    printf("\n\t\t\t\t          ⚜️                   SYSTEM                  ⚜️");
    printf("\n\t\t\t\t          ⚜️                                           ⚜️");
    printf("\n\t\t\t\t          ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ ⚜️ \n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getchar();
}

int isNameValid(const char *name)
{
    int validName = 1;
    int len = 0;
    int index = 0;
    len = strlen(name);
    for(index =0; index <len ; ++index)
    {
        if(!(isalpha(name[index])) && (name[index] != '\n') && (name[index] != ' '))
        {
            validName = 0;
            break;
        }
    }
    return validName;
}


int isValidDate(Date *validDate)
{
    if (validDate->year > 9999 ||
        validDate->year < 1900)
        return 0;
    if (validDate->month < 1 || validDate->month > 12)
        return 0;
    if (validDate->date < 1 || validDate->date > 31)
        return 0;
    
    if (validDate->month == 2 || validDate->month == 4 || validDate->month == 6 ||
        validDate->month == 9 || validDate->month == 11)
        return (validDate->date <= 30);
    return 1;
}

void addEmployee()
{
    Employee addEmployeeInfo = {0};
    FILE *fp = NULL;
    int status = 0;
    fp = fopen(FILE_NAME,"ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    headMessage("ADD NEW EMPLOYEE");
    printf("\n\n\t\t\tENTER DETAILS BELOW:");
    printf("\n\t\t\t⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯\n");
    printf("\n\t\t\tEmployee ID  = ");
    fflush(stdin);
    scanf("%u",&addEmployeeInfo.employeeId);
    do
    {
        printf("\n\t\t\tFather Name  = ");
        fflush(stdin);
        fgets(addEmployeeInfo.fatherName,50,stdin);
        status = isNameValid(addEmployeeInfo.fatherName);
        if (!status)
        {
            printf("\n\t\t\tName contain invalid character. Please enter again.");
        }
    }
    while(!status);
    do
    {
        printf("\n\t\t\tEmployee Name  = ");
        fflush(stdin);
        fgets(addEmployeeInfo.employeeName,50,stdin);
        status = isNameValid(addEmployeeInfo.employeeName);
        if (!status)
        {
            printf("\n\t\t\tName contain invalid character. Please enter again.");
        }
    }
    while(!status);
    do
    {
        printf("\n\t\t\tEmployee Address  = ");
        fflush(stdin);
        fgets(addEmployeeInfo.employeeAddr,50,stdin);
        status = isNameValid(addEmployeeInfo.employeeAddr);
        if (!status)
        {
            printf("\n\t\t\tName contain invalid character. Please enter again.");
        }
    }
    while(!status);
    printf("\n\t\t\tEmployee Salary  = ");
    fflush(stdin);
    scanf("%f",&addEmployeeInfo.employeeSalary);
    do
    {
        printf("\n\t\t\tEnter date in format (day/month/year): ");
        scanf("%d/%d/%d",&addEmployeeInfo.employeeJoiningDate.date,&addEmployeeInfo.employeeJoiningDate.month,&addEmployeeInfo.employeeJoiningDate.year);
        
        status = isValidDate(&addEmployeeInfo.employeeJoiningDate);
        if (!status)
        {
            printf("\n\t\t\tPlease enter a valid date.\n");
        }
    }
    while(!status);
    fwrite(&addEmployeeInfo,sizeof(addEmployeeInfo), 1, fp);
    fclose(fp);
}

void searchEmployee()
{
    int found = 0;
    int employeeId =0;
    Employee addEmployeeInfo = {0};
    FILE *fp = NULL;
    fp = fopen(FILE_NAME,"rb");
    if(fp == NULL)
    {
        printf("\n\t\t\tFile is not opened\n");
        exit(1);
    }
    headMessage("SEARCH EMPLOYEE");
    printf("\n\n\t\t\tEnter employee ID NO to search:");
    fflush(stdin);
    scanf("%u",&employeeId);
    while (fread (&addEmployeeInfo, sizeof(addEmployeeInfo), 1, fp))
    {
        if(addEmployeeInfo.employeeId == employeeId)
        {
            found = 1;
            break;
        }
    }
    if(found)
    {
        printf("\n\t\t\tEmployee id = %d\n",addEmployeeInfo.employeeId);
        printf("\n\t\t\tEmployee name = %s",addEmployeeInfo.employeeName);
        printf("\t\t\tEmployee Salary = %.2f\n",addEmployeeInfo.employeeSalary);
        printf("\t\t\tFather Name = %s",addEmployeeInfo.fatherName);
        printf("\n\t\t\tEmployee Address = %s",addEmployeeInfo.employeeAddr);
        printf("\t\t\tEmployee Joining Date(day/month/year) =  (%d/%d/%d)",addEmployeeInfo.employeeJoiningDate.date,
               addEmployeeInfo.employeeJoiningDate.month, addEmployeeInfo.employeeJoiningDate.year);
    }
    else
    {
        printf("\n\t\t\tNo Record");
    }
    fclose(fp);
    printf("\n\n\n\t\t\tPress any key to go to main menu.....");
    fflush(stdin);
    getchar();
}

void viewEmployee()
{
    int found = 0;
    Employee addEmployeeInfo = {0};
    FILE *fp = NULL;
    unsigned int countEmployee = 1;
    headMessage("VIEW EMPLOYEE DETAILS");
    fp = fopen(FILE_NAME,"rb");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    printf("\n\t\t\tEmployee Count = %d\n\n",countEmployee);
    while (fread (&addEmployeeInfo, sizeof(addEmployeeInfo), 1, fp))
    {
        printf("\t\t\tEmployee id = %u\n",addEmployeeInfo.employeeId);
        printf("\t\t\tEmployee Name = %s",addEmployeeInfo.employeeName);
        printf("\t\t\tEmployee Salary = %.2f\n",addEmployeeInfo.employeeSalary);
        printf("\t\t\tFather Name = %s",addEmployeeInfo.fatherName);
        printf("\t\t\tEmployee Address = %s",addEmployeeInfo.employeeAddr);
        printf("\t\t\tEmployee Joining Date(day/month/year) =  (%d/%d/%d)\n\n",addEmployeeInfo.employeeJoiningDate.date,
               addEmployeeInfo.employeeJoiningDate.month, addEmployeeInfo.employeeJoiningDate.year);
        found = 1;
        ++countEmployee;
    }
    fclose(fp);
    if(!found)
    {
        printf("\n\t\t\tNo Record");
    }
    printf("\n\n\t\t\tPress any key to go to main menu.....");
    fflush(stdin);
    getchar();
}

void deleteEmployee()
{
    int found = 0;
    int employeeDelete = 0;
    Employee addEmployeeInfo = {0};
    FILE *fp = NULL;
    FILE *tmpFp = NULL;
    headMessage("DELETE EMPLOYEE DETAILS");
    fp = fopen(FILE_NAME,"rb");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        exit(1);
    }
    tmpFp = fopen("tmp.bin","wb");
    if(tmpFp == NULL)
    {
        fclose(fp);
        printf("File is not opened\n");
        exit(1);
    }
    printf("\n\t\t\tEnter employee ID NO. for delete:");
    scanf("%d",&employeeDelete);
    while (fread (&addEmployeeInfo, sizeof(addEmployeeInfo), 1, fp))
    {
        if(addEmployeeInfo.employeeId != employeeDelete)
        {
            fwrite(&addEmployeeInfo,sizeof(addEmployeeInfo), 1, tmpFp);
        }
        else
        {
            found = 1;
        }
    }
    if (found) {
        printf("\n\t\t\tRecord deleted successfully.....");
    }else {
        printf("\n\t\t\tRecord not found");
    }
    fclose(fp);
    fclose(tmpFp);
    remove(FILE_NAME);
    rename("tmp.bin",FILE_NAME);
}

void menu()
{
    int choice = 0;
    do
    {
        headMessage("MAIN MENU");
        printf("\n\n\n\t\t\t1.Add employee");
        printf("\n\t\t\t2.Search employee");
        printf("\n\t\t\t3.View employee");
        printf("\n\t\t\t4.Delete employee");
        printf("\n\t\t\t0.Exit");
        printf("\n\n\n\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                addEmployee();
                break;
            case 2:
                searchEmployee();
                break;
            case 3:
                viewEmployee();
                break;
            case 4:
                deleteEmployee();
                break;
            case 0:
                printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
                exit(1);
                break;
            default:
                printf("\n\n\n\t\t\tINVALID INPUT!!! Try again...");
        }
    }
    while(choice!=0);
}

void loginMethod()
{
    unsigned char userName[30] = {0};
    unsigned char password[20] = {0};
    
    unsigned char defaultuserName[30] = "zarmina\n";
    unsigned char defaultPassword[20] = "123\n";
    
    headMessage("LOGIN");
    
    while (1) {
        printf("\n\n\n\t\t\t\tUsername:");
        fgets(userName,30,stdin);
        printf("\n\t\t\t\tPassword:");
        fgets(password,20,stdin);
        if((!strcmp(userName,defaultuserName)) && (!strcmp(password,defaultPassword)))
        {
            menu();
        }
        else
        {
            printf("\t\t\t\tLogin Failed Enter Again Username & Password\n\n");
        }
    }
}

int main(int argc, const char * argv[]) {
    welcomeMessage();
    loginMethod();
    return 0;
}
