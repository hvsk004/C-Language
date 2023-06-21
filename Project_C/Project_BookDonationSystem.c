#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Books_Record
{
    int Book_id;
    int Year;
    char Title[500];
    char Author[500];
    char Donor[500];
    char Reciver[500];
} b1;
void Display();
void Add();
void Delete();
void Update();
void Search();
int Check(int id);
FILE *Record;
int main()
{
    int choice_1;
    do
    {
        printf("\n----------BOOK DONATION SYSTEM----------\n");
        printf("1.Add Record\n2.Update Record\n3.Delete Record\n4.Display\n5.Search\n6.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice_1);
        switch (choice_1)
        {
        case 1:
            Add();
            break;
        case 2:
            Update();
            break;
        case 3:
            Delete();
            break;
        case 4:
            Display();
            break;
        case 5:
            Search();
            break;
        case 6:
            printf("Thanks for using the Program");
            break;
        default:
            printf("The Choice you entered is Wrong");
        }

    } while (choice_1 != 6);
    return 0;
}
void Add()
{
    Record = fopen("MasterRecord.txt", "a+");
    printf("Loading Add Record Module....\n");
    printf("Enter the Title of the Book: ");
    fflush(stdin);
    scanf("%[^\n]", b1.Title); // using a scanset to read input
    printf("Enter the Book ID: ");
    scanf("%d", &b1.Book_id);
    printf("Enter the Year of Publishing: ");
    scanf("%d", &b1.Year);
    fflush(stdin);
    printf("Enter the Author of The Book: ");
    scanf("%[^\n]", b1.Author); // using a scanset to read input
    fflush(stdin);
    printf("Enter the Name of Donor: ");
    scanf("%[^\n]", b1.Donor); // using a scanset to read input
    fflush(stdin);
    printf("Enter The name of the Receiver: ");
    scanf("%[^\n]", b1.Reciver); // using a scanset to read input
    fflush(stdin);
    fwrite(&b1, sizeof(b1), 1, Record);
    fclose(Record);
    printf("Book Record Added Sucessfully\n");
}
void Update()
{
    FILE *temp;
    int id;
    printf("Loading Update Module....\n");
    printf("Enter the Book ID of the record you want to update: ");
    scanf("%d", &id);
    Record = fopen("MasterRecord.txt", "r");
    temp = fopen("TempRecord.txt", "w");
    int flag=0;
    while (fread(&b1, sizeof(b1), 1, Record))
    {
        if (id == b1.Book_id)
        {
        	flag=1;
            printf("1.Update Title\n2.Update Book ID\n3.Update Year\n4.Update Author\n5.Update Donors Name\n6.Update Receivers Name\n7.Update All\n");
            int choice;
            printf("Enter Your Choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("Enter the Title of the Book: ");
                scanf(" %[^\n]", b1.Title); // using a scanset to read input
                break;
            case 2:
                printf("Enter the new Book ID: ");
                scanf("%d", &b1.Book_id);
                break;
            case 3:
                printf("Enter the Year of Publication: ");
                scanf("%d", &b1.Year);
                break;
            case 4:
                printf("Enter the Author's Name: ");
                scanf(" %[^\n]", b1.Author); // using a scanset to read input
                break;
            case 5:
                printf("Enter the Donors name: ");
                scanf(" %[^\n]", b1.Donor); // using a scanset to read input
                break;
            case 6:
                printf("Enter the Receivers name: ");
                scanf(" %[^\n]", b1.Reciver); // using a scanset to read input
                break;
            case 7:
                printf("Enter the Title of the Book: ");
                scanf(" %[^\n]", b1.Title); // using a scanset to read input
                printf("Enter the Book ID: ");
                scanf("%d", &b1.Book_id);
                printf("Enter the Year of Publishing: ");
                scanf("%d", &b1.Year);
                printf("Enter the Author of The Book: ");
                scanf(" %[^\n]", b1.Author); // using a scanset to read input
                printf("Enter the Name of Donor: ");
                scanf(" %[^\n]", b1.Donor); // using a scanset to read input
                printf("Enter The name of the Receiver: ");
                scanf(" %[^\n]", b1.Reciver); // using a scanset to read input
                break;
            default:
                printf("Wrong Choice\n");
            }
            fwrite(&b1, sizeof(b1), 1, temp);
            printf("After Updation: \n");
            printf("The Book ID is : %d\n", b1.Book_id);
            printf("The Book Title is : %s\n", b1.Title);
            printf("The Author of the book is : %s\n", b1.Author);
            printf("The Year of Publication of the book is: %d\n", b1.Year);
            printf("The book was donated by : %s\n", b1.Donor);
            printf("The book was recived by: %s\n", b1.Reciver);
        }
        else
        {
            fwrite(&b1, sizeof(b1), 1, temp);
        }
    }
    if(flag==1)
    {
   		fclose(Record);
        fclose(temp);
         temp = fopen("TempRecord.txt", "r");
    	Record = fopen("MasterRecord.txt", "w");
    	while (fread(&b1, sizeof(b1), 1, temp))
    	{
      	  fwrite(&b1, sizeof(b1), 1, Record);
    	}
    	fclose(Record);
   		fclose(temp);
	}
	else
	{
		printf("Book With ID not found in Records.\n");
	}
  
}
void Delete()
{
    printf("Loading Delete Module....\n");
    Record = fopen("MasterRecord.txt", "r");
    FILE *temp;
    temp = fopen("TempRecord.txt", "w");
    int id;
    printf("Enter the ID of the book you want to delete: ");
    scanf("%d", &id);
    int record_deleted = 0; // flag variable
    while (fread(&b1, sizeof(b1), 1, Record))
    {
        if (id == b1.Book_id)
        {
            printf("Deleting Record\n");
            record_deleted = 1;
        }
        else
        {
            fwrite(&b1, sizeof(b1), 1, temp);
        }
    }
    fclose(Record);
    fclose(temp);

    if (record_deleted)
    {
        printf("Record Successfully Deleted.\n");
        Record = fopen("MasterRecord.txt", "w");
        temp = fopen("TempRecord.txt", "r");
        while (fread(&b1, sizeof(b1), 1, temp))
        {
            fwrite(&b1, sizeof(b1), 1, Record);
        }
        fclose(Record);
        fclose(temp);
    }
    else
    {
        printf("Book with ID %d not found in the records.\n", id);
    }
}
void Display()
{
    printf("Loading Display Module....\n");
    int choice;
    printf("Enter 1 to display all records or 2 to display a specific record: ");
    scanf("%d", &choice);
    int bookId;
    Record = fopen("MasterRecord.txt", "r");
    switch (choice)
    {
    case 1:
        printf("Displaying All Records: \n\n");
        while (fread(&b1, sizeof(b1), 1, Record))
        {
            printf("The Book ID is : %d\n", b1.Book_id);
            printf("The Book Title is : %s\n", b1.Title);
            printf("The Author of the book is : %s\n", b1.Author);
            printf("The Year of Publication of the book is: %d\n", b1.Year);
            printf("The book was donated by : %s\n", b1.Donor);
            printf("The book was received by: %s\n\n", b1.Reciver);
        }
        break;

    case 2:
        printf("Enter the Book ID to display its details: ");
        scanf("%d", &bookId);
        printf("Searching Book with bookid %d", bookId);
        while (fread(&b1, sizeof(b1), 1, Record))
        {
            if (b1.Book_id == bookId)
            {
                printf("The Book ID is : %d\n", b1.Book_id);
                printf("The Book Title is : %s\n", b1.Title);
                printf("The Author of the book is : %s\n", b1.Author);
                printf("The Year of Publication of the book is: %d\n", b1.Year);
                printf("The book was donated by : %s\n", b1.Donor);
                printf("The book was received by: %s\n\n", b1.Reciver);
                break;
            }
        }
        if (feof(Record))
        {
            printf("Book with ID %d not found in the records.\n", bookId);
        }
        break;

    default:
        printf("Invalid choice.\n");
        break;
    }

    fclose(Record);
}

void Search()
{
    Record = fopen("MasterRecord.txt", "r");
    printf("Loading Search Module....\n");
    int choice;
    char query[500];
    printf("1.Search by Title\n2.Search by Author\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the Title: ");
        fflush(stdin);
        scanf("%[^\n]", query);
        while (fread(&b1, sizeof(b1), 1, Record))
        {
            if (strcmp(query, b1.Title) == 0)
            {
                printf("\nBook Found Scucessfully.....\n\n");
                printf("The Book ID is : %d\n", b1.Book_id);
                printf("The Book Title is : %s\n", b1.Title);
                printf("The Author of the book is : %s\n", b1.Author);
                printf("The Year of Publication of the book is: %d\n", b1.Year);
                printf("The book was donated by : %s\n", b1.Donor);
                printf("The book was received by: %s\n", b1.Reciver);
                break;
            }
        }
        if (feof(Record))
        {
            printf("Book with Title %s not found in the records.\n", query);
        }
        break;
    case 2:
        printf("Enter the Author: ");
        fflush(stdin);
        scanf("%[^\n]", query);
        while (fread(&b1, sizeof(b1), 1, Record))
        {
            if (strcmp(query, b1.Author) == 0)
            {
                printf("\nBook Found Scucessfully.....\n\n");
                printf("The Book ID is : %d\n", b1.Book_id);
                printf("The Book Title is : %s\n", b1.Title);
                printf("The Author of the book is : %s\n", b1.Author);
                printf("The Year of Publication of the book is: %d\n", b1.Year);
                printf("The book was donated by : %s\n", b1.Donor);
                printf("The book was received by: %s\n", b1.Reciver);
                break;
            }
        }
        if (feof(Record))
        {
            printf("Book with Author %s not found in the records.\n", query);
        }
        break;
    default:
        printf("Wrong Choice!\n");
        break;
    }
    fclose(Record);
}

