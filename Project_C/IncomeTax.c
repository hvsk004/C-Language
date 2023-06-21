
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct TaxRecord
{
    char pan_number[100];
    char dob[200];
    char name[500];
    char address[500];
    float income;
    float tax_amount;
    int itid;
} t1;
FILE *Record;
float calculate();
void add();
void display();
void search();
void update();
void delete_record();
int main()
{
    int choice;
    do
    {

        printf("---------INCOME TAX CALCULATOR---------\n");
        printf("1.Add\n2.Display\n3.Update\n4.Search\n5.Delete\n6.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        case 3:
            update();
            break;
        case 4:
            search();
            break;
        case 5:
            delete_record();
            break;
        case 6:
            printf("Thank You For Using the program......\n");
            break;
        default:
            printf("Your Choice is Wrong.\n");
        }
    } while (choice != 6);
    return 0;
}
void add()
{
    Record = fopen("ITRecords.txt", "a+");
    printf("Loading Add Module\n");
    printf("Enter ID: ");
    scanf("%d", &t1.itid);
    printf("Enter Your Name: ");
    fflush(stdin);
    scanf("%[^\n]",t1.name);
    printf("Enter Your Date of Birth: ");
    fflush(stdin);
    scanf("%s", t1.dob);
    printf("Enter Your Address: ");
    fflush(stdin);
    scanf("%[^\n]", t1.address);
    printf("Enter Your Income: ");
    scanf("%f", &t1.income);
    printf("Enter Your PAN Number: ");
    fflush(stdin);
    scanf("%[^\n]", t1.pan_number);
    fwrite(&t1, sizeof(t1), 1, Record);
    fclose(Record);
}
float calculate()
{
    if (t1.income <= 300000)
    {
        t1.tax_amount = 0;
    }
    else if (t1.income > 30000 && t1.income <= 600000)
    {
        t1.tax_amount = 0.05 * t1.income;
    }
    else if (t1.income > 60000 && t1.income <= 900000)
    {
        t1.tax_amount = 0.05 * (600000) + 0.1 * (t1.income - 600000);
    }
    else if (t1.income > 900000 && t1.income <= 1200000)
    {
        t1.tax_amount = 0.05 * (600000) + 0.1 * (300000) + 0.15 * (t1.income - 900000);
    }
    else if (t1.income > 1200000 && t1.income <= 1500000)
    {
        t1.tax_amount = 0.05 * (600000) + 0.1 * (300000) + 0.15 * (300000) + 0.2 * (t1.income - 1200000);
    }
    else if (t1.income > 1500000)
    {
        t1.tax_amount = 0.05 * (600000) + 0.1 * (300000) + 0.15 * (300000) + 0.2 * (300000) + 0.3 * (t1.income - 1500000);
    }
    return t1.tax_amount;
}
void display()
{
    Record = fopen("ITRecords.txt", "r");
    printf("Loading Display Module.\n");
    while (fread(&t1, sizeof(t1), 1, Record))
    {
        printf("\nId : %d\n", t1.itid);
        printf("Name: %s\n", t1.name);
        printf("Date of Birth is : %s\n", t1.dob);
        printf("Your Address is: %s\n", t1.address);
        printf("Your PAN number is : %s\n", t1.pan_number);
        printf("Your Income is : %f\n", t1.income);
        printf("Your Income Tax is : %f\n", calculate());
    }
    fclose(Record);
}
void update()
{
    printf("Loading Update Module....\n");
    FILE *temp;
    temp = fopen("TempIT.txt", "w");
    int id;
    printf("Enter the id number for the record which has to be updated: ");
    scanf("%d", &id);
    Record = fopen("ITRecords.txt", "r");
    int flag = 0;
    while (fread(&t1, sizeof(t1), 1, Record))
    {
        if (id == t1.itid)
        {
            int choice;
            flag = 1;
            do
            {
                printf("1.Update Name\n2.Update DOB\n3.Update Your Address\n4.Update PAN number\n5.Update Income\n6.Exit Update Module\n");
                printf("Enter Your Choice: ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    printf("Enter Name: ");
                    fflush(stdin);
                    gets(t1.name);
                    break;
                case 2:
                    printf("Enter DOB: ");
                    fflush(stdin);
                    scanf("%[^\n]", t1.dob);
                    break;
                case 3:
                    printf("Enter Address: ");
                    fflush(stdin);
                    scanf("%[^\n]", t1.address);
                    break;
                case 4:
                    printf("Enter PAN: ");
                    fflush(stdin);
                    scanf("%[^\n]", t1.pan_number);
                    break;
                case 5:
                    printf("Update Income: ");
                    scanf("%f", &t1.income);
                    break;
                case 6:
                    printf("Exiting Update Module....\n");
                    break;
                default:
                    printf("Wrong Choice....");
                }
            } while (choice != 6);
            fwrite(&t1, sizeof(t1), 1, temp);
            printf("\nAfter Updation: ");
            printf("Name: %s\n", t1.name);
            printf("Date of Birth is : %s\n", t1.dob);
            printf("Your Address is: %s\n", t1.address);
            printf("Your PAN number is : %s\n", t1.pan_number);
            printf("Your Income is : %f\n", t1.income);
            printf("Your Income Tax is : %f\n\n", calculate());
        }
        else
        {
            fwrite(&t1, sizeof(t1), 1, temp);
        }
    }
    if (flag == 1)
    {
        fclose(Record);
        fclose(temp);
        Record = fopen("ITRecord.txt", "w");
        temp = fopen("TempIT.txt", "r");
        while (fread(&t1, sizeof(t1), 1, temp))
        {
            fwrite(&t1, sizeof(t1), 1, Record);
        }
        fclose(Record);
        fclose(temp);
    }
    else
    {
        printf("ID not found in Records.\n");
    }
}
void search()
{
    printf("Loading search Module...\n");
    Record = fopen("ITRecords.txt", "r");
    printf("Enter The ID of the Record You want to find: ");
    int id;
    scanf("%d", &id);
    while (fread(&t1, sizeof(t1), 1, Record))
    {
        if (id == t1.itid)
        {
            printf("Id : %d\n", t1.itid);
            printf("Name: %s\n", t1.name);
            printf("Date of Birth is : %s\n", t1.dob);
            printf("Your Address is: %s\n", t1.address);
            printf("Your PAN number is : %s\n", t1.pan_number);
            printf("Your Income is : %f\n", t1.income);
            printf("Your Income Tax is : %f\n", calculate());
            break;
        }
        else
        {
            printf("ID not found in Records\n");
        }
    }
}
void delete_record()
{
    printf("Loading Delete Module....\n");
    Record = fopen("ITRecords.txt", "r");
    FILE *temp;
    temp = fopen("TempIT.txt", "w");
    int id;
    printf("Enter the ID of the record you want to delete: ");
    scanf("%d", &id);
    int record_deleted = 0; // flag variable
    while (fread(&t1, sizeof(t1), 1, Record))
    {
        if (id == t1.itid)
        {
            printf("Deleting Record\n");
            record_deleted = 1;
        }
        else
        {
            fwrite(&t1, sizeof(t1), 1, temp);
        }
    }
    fclose(Record);
    fclose(temp);

    if (record_deleted)
    {
        printf("Record Successfully Deleted.\n");
        Record = fopen("ITRecords.txt", "w");
        temp = fopen("TempIT.txt", "r");
        while (fread(&t1, sizeof(t1), 1, temp))
        {
            fwrite(&t1, sizeof(t1), 1, Record);
        }
        fclose(Record);
        fclose(temp);
    }
    else
    {
        printf("ID %d not found in the records.\n", id);
    }
}
