#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 100

typedef struct{
    char name[100];
    int id;
    char code[20];
    float ca_marks;
} Record;


void create_record();
void search_record();
void modify_record();
void delete_record();
void display_record();

Record records[MAX_RECORDS];
int num_records = 0;
int main(){
    int choice;
    do{
        printf("\n");
        printf("CA Evaluator System");
        printf("\n-------------------\n");
        printf("1. Create Record");
        printf("\n");
        printf("2. Search Record\n");
        printf("3. Modify Record\n");
        printf("4. Delete Record");
        printf("\n");
        printf("5. Display Records");
        printf("\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice){
            case 1: 
            create_record();
            break;
            case 2:
            search_record();
            break;
            case 3:
            modify_record();
            break;
            case 4:
            delete_record();
            break;
            case 5:
            display_record();
            break;
            case 6:
            break;
            default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice !=0);

    return 0;
}
// function to create a new record
void create_record(){
    Record record;

    printf("\nEnter Name:");
    scanf("%s", record.name);
    printf("Enter ID:");
    scanf("%d", &record.id);
    printf("Course Code:");
    scanf("%s",record.code);
    printf("Enter CA Marks:");
    scanf("%f", &record.ca_marks);
    

    records[num_records] = record;
    num_records++;

    FILE *fp = fopen("records.txt", "a");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return;

    }
    fprintf(fp, "%s %d %.2f %s\n", record.name, record.id, record.ca_marks, record.code);
    fclose(fp);

    printf("Record created successfully.\n");
}


void search_record(){
    int id,found = 0;
    printf("ID : ");
    scanf("%d",&id);

    for(int i = 0; i<num_records; i++){
        if(records[i].id == id){
            printf("\n Record found: \n");
            printf("Name: %s\n",records[i].name);
            printf("ID: %d\n",records[i].id);
            printf("Course Code: %s\n",records[i].code);
            printf("CA Marks: %.2f\n",records[i].ca_marks);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("\n Couldn't find record.\n");
    }
}


void modify_record(){
    int id, found = 0;

    printf("\nEnter ID to modify:");
    scanf("%d", &id);

    for(int i = 0; i< num_records; i++){
        if (records[i].id ==id){
            printf("\nEnter new details:\n");
            printf("Name: ");
            scanf("%s", records[i].name);
            printf("ID:");
            scanf("%d, &records[i].id");
            printf("Course Code :");
            scanf("%s", records[i].code);
            printf("CA Marks: ");
            scanf("%f", &records[i].ca_marks);

            FILE *fp = fopen("records.txt", "w");
            if (fp == NULL){
                printf("Error opening file.\n");
                return;

            }
            for(int j = 0; j < num_records; j++){
                fprintf(fp, "%s %d %s %.2f\n", records[j].name, records[j].id,records[j].code,records[j].ca_marks);
            }
            fclose(fp);

            printf("Record has been modified.\n");
            found = 1;
            break;
        }
    }
if(!found){
        printf("\n Record not found.\n");
    }
}


void delete_record(){
    int id,found=0;

    printf("\n Enter ID to delete: ");
    scanf("%d,&id");


    for(int i = 0;i<num_records;i++){
        if (records[i].id==id){
            for(int j=i;j<num_records-1;j++){
                records[j]=records[j+1];
            }
            num_records--;

            FILE *fp = fopen("records.txt","w");
            if(fp == NULL){
                printf("Error opening file.\n");
                return;
            }

            for (int j=0;j<num_records;j++){
                fprintf(fp,"%s %d %s %.2f\n",records[j].name,records[j].code,records[j].ca_marks);
            }
            fclose(fp);

            printf("Record has been successfully\n");
            found=1;
            break;
            }
        }

    if(!found){
        printf("\n Record not found.\n");
    }
}

void display_record(){
    FILE *fp = fopen("records.txt","r");
    if(fp==NULL){
        printf("Error opening file.\n");
        return;
    }

    printf("\n All Records:\n");
    printf("---------\n");
    while(!feof(fp)){
        char name[50];
        int id;
        int code;
        float ca_marks;

        if(fscanf(fp, "%s %d %f\n",name,&id,&ca_marks)==3){
            printf("Name: %s\n",name);
            printf("ID: %d\n",id);
            printf("Course code: %s\n",code);
            printf("CA MARKS: %.2f\n",ca_marks);
            printf("\n");
        }
    }
    fclose(fp);
}
