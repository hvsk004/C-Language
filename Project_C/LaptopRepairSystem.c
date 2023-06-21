#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Laptop //Structure Declaration
{
	int customer_id;
    char name[400];
    char email[400];
    char address[400];
    char laptop_name[400];
    char problem[400];
    char Technician[400];
    char Tech_phone[100];
}l1;//Structure Variable declaration
FILE *Record;//File pointer declaration
void add();//Add function declaration
void display();//void is used because the function does not return any data(type).
void update();
void delete_record();
int main()
{
    int choice;
    do//We use do while because it executes the block of code atleast once before checking the condition
    {
    	printf("\n------------Laptop Repair System------------\n");
    	printf("\n1.Add\n2.Dispaly\n3.Update\n4.Delete\n5.Exit\n");
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
            delete_record();
            break;
        case 5:
            printf("Thanks for using the Program\n");
            break;
        default:
            printf("Wrong Choice\n");
        }
    } 
	while (choice != 5);
    return 0;
}
void add()
{	
	printf("Loading Add Module......\n");
	Record=fopen("LaptopRecord.txt","a+");
	printf("Enter Customer ID : ");
	scanf("%d",&l1.customer_id);
	printf("Enter Your Name: ");
	fflush(stdin);//Clears the input buffer
	gets(l1.name);//gets is used so that we can take multiple words as input
	printf("Enter Your Email: ");
	fflush(stdin);
	gets(l1.email);
	printf("Enter Your Address: ");
	fflush(stdin);
	gets(l1.address);
	printf("Enter Your Laptop Name and Model: ");
	fflush(stdin);
	gets(l1.laptop_name);
	printf("Enter Your Problem : ");
	fflush(stdin);
	gets(l1.problem);
	printf("Enter Assigned Techncian's Name: ");
	fflush(stdin);
	gets(l1.Technician);
	printf("Enter Technician's Mobile Number : ");
	fflush(stdin);
	gets(l1.Tech_phone);
	printf("Sucessfully Added Record : ");
	fwrite(&l1,sizeof(l1),1,Record);
	fclose(Record);	//Close the Record File
}
void display()
{
    printf("Loading Display Module......\n\n");
    Record = fopen("LaptopRecord.txt", "r");
    if (Record == NULL)//NULL file not found or error opening file.
    {
        printf("No records found.\n");
        return;
    }
    while (fread(&l1, sizeof(l1), 1, Record))//Reads all the records from the file when EOF the condition becomes false and exits out of loop
    {
        printf("Customer ID : %d\n", l1.customer_id);
        printf("Name : %s\n", l1.name);
        printf("Email : %s\n", l1.email);
        printf("Address : %s\n", l1.address);
        printf("Laptop Name: %s\n", l1.laptop_name);
        printf("Issue with the Laptop: %s\n", l1.problem);
        printf("Technician Assigned: %s\n", l1.Technician);
        printf("Technician's Contact Number: %s\n", l1.Tech_phone);
        printf("\n");
    }
    fclose(Record);
}
void update()
{
	printf("Loading Update Module....\n");
    FILE *temp;
    temp = fopen("TempLaptopRecord.txt", "w");
    int id;
    printf("Enter the customer id number for the record which has to be updated: ");
    scanf("%d", &id);
    Record = fopen("LaptopRecord.txt", "r");
    int flag = 0;//The flag variable is used to check wether the given id is found or not if found it means update sucessful
    while (fread(&l1, sizeof(l1), 1, Record))
    {
        if (id == l1.customer_id)
        {
            int choice;
            flag = 1;
            do
            {
                printf("1.Update Name\n2.Update Email\n3.Update Your Address\n4.Update Laptop Model\n5.Update Problem\n6.Change Technician\n7.Update Technician Contact\n8.Exit Update Module");
                printf("Enter Your Choice: ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    printf("Enter Name: ");
                    fflush(stdin);
                    gets(l1.name);
                    break;
                case 2:
                    printf("Enter Email: ");
                    fflush(stdin);
                    gets(l1.email);
                    break;
                case 3:
                    printf("Enter Address: ");
                    fflush(stdin);
                    gets(l1.address);
                    break;
                case 4:
                    printf("Enter Laptop Model : ");
                    fflush(stdin);
                    gets(l1.laptop_name);
                    break;
                case 5:
                    printf("Enter Problem: ");
                    fflush(stdin);
                    gets(l1.problem);
                    break;
                case 6:
                    printf("Enter Technician Name: ");
                    fflush(stdin);
                    gets(l1.Technician);
                    break;
                case 7:
                	printf("Enter Technician Number: ");
                	fflush(stdin);
                	gets(l1.Tech_phone);
                	break;
                case 8:
                	printf("Exiting Update Module: ");
                	break;
                default:
                    printf("Wrong Choice....");
                }
            } while (choice != 8);
            fwrite(&l1, sizeof(l1), 1, temp);
            printf("\nAfter Updation: \n");
            printf("Name : %s\n",l1.name);
			printf("Email : %s\n",l1.email);
			printf("Address : %s\n",l1.address);
			printf("Laptop Name: %s\n",l1.laptop_name);
			printf("Issue with the Laptop: %s\n",l1.problem);
			printf("Technician Assigned: %s\n",l1.Technician);
			printf("Technician's Contact Number: %s\n",l1.Tech_phone);
        }
        else
        {
            fwrite(&l1, sizeof(l1), 1, temp);
        }
    }
    if (flag == 1)//If Record found Write all the records from temp file to main file
    {
        fclose(Record);
        fclose(temp);
        Record = fopen("LaptopRecord.txt", "w");
        temp = fopen("TempLaptopRecord.txt", "r");
        while (fread(&l1, sizeof(l1), 1, temp))
        {
            fwrite(&l1, sizeof(l1), 1, Record);
        }
        fclose(Record);
        fclose(temp);
    }
    else
    {
        printf("ID not found in Records.\n");
    }
}
void delete_record()
{
    printf("Loading Delete Module....\n");
    Record = fopen("LaptopRecord.txt", "r");
    FILE *temp;
    temp = fopen("TempLaptopRecord.txt", "w");
    int id;
    printf("Enter the ID you want to delete: ");
    scanf("%d", &id);
    int record_deleted = 0; // flag variable
    while (fread(&l1, sizeof(l1), 1, Record))
    {
        if (id == l1.customer_id)//If record found deletes record(doesn't write it to Temp file).
        {
            printf("Deleting Record\n");
            record_deleted = 1;
        }
        else
        {
            fwrite(&l1, sizeof(l1), 1, temp);
        }
    }
    fclose(Record);
    fclose(temp);

    if (record_deleted==1)
    {
    	printf("Record Sucessfully Deleted....\n");
    	Record=fopen("LaptopRecord.txt","w");
    	temp=fopen("TempLaptopRecord.txt","r");
    	while(fread(&l1,sizeof(l1),1,temp))
    	{
    		fwrite(&l1,sizeof(l1),1,Record);
		}
		fclose(Record);
		fclose(temp);
    }
    else
    {
        printf("ID %d not found in the records.\n", id);
    }
}

