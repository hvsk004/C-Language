#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct team
{
    char T_name[60];
    int Num_players;
    char player_names[11][60];
} T;
char d[50] = "No Data Found";
void add_team()
{
    printf("Enter The team Name: ");
    scanf("%s", T.T_name);
    FILE *fp;
    fp = fopen("E:\\Mine Code\\C Files\\IPL Teams.txt", "a");
    fwrite(&T, sizeof(T), 1, fp);
    fclose(fp);
}
void delete_team()
{

    char team[50];
    printf("Enter the team You want To Delete: ");
    scanf("%s", team);
    FILE *f;
    FILE *fp;
    f = fopen("E:\\Mine Code\\C Files\\IPL Teams.txt", "r");
    fp = fopen("E:\\Mine Code\\C Files\\tempTeams.txt", "w");
    char buffer[1000];
    while (fgets(buffer, sizeof(buffer), f))
    {

        int len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n')
        {
            buffer[len - 1] = '\0';
        }

        // Check if line contains team to be removed
        if (strcmp(buffer, team) != 0)
        {
            fprintf(fp, "%s\n", buffer);
        }
    }

    fclose(f);
    fclose(fp);
    remove("E:\\Mine Code\\C Files\\IPL Teams.txt");
    rename("E:\\Mine Code\\C Files\\tempTeams.txt", "E:\\Mine Code\\C Files\\IPL Teams.txt");
}
void making_schedule()

{
    int d, m, y, N;
    printf("Enter the Start Date(dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);
    int n, n2 = 0;
    FILE *fp;
    fp = fopen("E:\\Mine Code\\C Files\\schedule.txt", "w");
    printf("Enter The number of Teams: ");
    scanf("%d", &n);
    char Team_names[n][50];
    char Schedule[n2];
    for (int i = n - 1; i > 0; i--)
    {
        n2 += i;
    }
    printf("Number of Matches: %d\n", n2);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Team %d: ", i + 1);
        scanf("%s", &Team_names[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (d == 31)
            {
                d = 0;
                m = m + 1;
            }
            if (d == 30)
            {
                if (m == 4 || m == 6 || m == 9 || m == 11)
                {
                    d = 0;
                    m = m + 1;
                }
            }
            if (d == 28 && m == 2)
            {
                d = 0;
                m = m + 1;
            }
            d = d + 1;
            printf("%s vs %s \t%d/%d/%d\n", Team_names[i], Team_names[j], d, m, y);
            fprintf(fp, "%s vs %s \t%d/%d/%d\n", Team_names[i], Team_names[j], d, m, y);
        }
    }
    fclose(fp);
}
void create_team()
{
    FILE *fp;
    fp = fopen("E:\\Mine Code\\C Files\\IPL Teams.txt", "w");
    printf("Enter the Team Names:\n");
    int n;
    printf("Enter the Number of Teams:");
    scanf("%d", &n);
    printf("\nEnter the Team Names:\n");
    char names[n][40];
    for (int i = 0; i < n; i++)
    {
        printf("Enter The %d Team: ", i + 1);
        scanf("%s", names[i]);
        fprintf(fp, "%s\n", names[i]);
    }
    fclose(fp);
    display();
}
void display()
{
    char ch;
    FILE *fp;
    fp = fopen("E:\\Mine Code\\C Files\\IPL Teams.txt", "r");
    printf("\nCurrent Added Teams:\n");
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
}
void update_schedule()
{
    printf("Update The Schedule:\n");
    int d, m, y, N;
    printf("Enter the Start Date(dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);
    int n, n2 = 0;
    FILE *fp;
    fp = fopen("E:\\Mine Code\\C Files\\schedule.txt", "w");
    printf("Enter The number of Teams: ");
    scanf("%d", &n);
    char Team_names[n][50];
    for (int i = n - 1; i > 0; i--)
    {
        n2 += i;
    }
    printf("Number of Matches: %d\n", n2);
    char Schedule[n2];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Team %d: ", i + 1);
        scanf("%s", &Team_names[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (d == 31)
            {
                d = 0;
                m = m + 1;
            }
            if (d == 30)
            {
                if (m == 4 || m == 6 || m == 9 || m == 11)
                {
                    d = 0;
                    m = m + 1;
                }
            }
            if (d == 28 && m == 2)
            {
                d = 0;
                m = m + 1;
            }
            d = d + 1;
            printf("%s vs %s \t%d/%d/%d\n", Team_names[i], Team_names[j], d, m, y);
            fprintf(fp, "%s vs %s \t%d/%d/%d\n", Team_names[i], Team_names[j], d, m, y);
        }
    }
    fclose(fp);
    printf("Schedule Upadated Succesfully");
}
void view_schedule()
{
    char ch;
    FILE *fp;
    printf("IPL SCHEDULE\n______\n");
    fp = fopen("E:\\Mine Code\\C Files\\schedule.txt", "r");
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
}
void displays()
{
    char ch;
    FILE *fp;
    printf("Team Names:\n");
    fp = fopen("E:\\Mine Code\\C Files\\IPL.txt", "r");
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
}
void main()
{
    int n;
    do
    {
        printf("\n___________\n");
        printf("1.Display Teams which Already Exist:\n");
        printf("2.Create a New Teams\n");
        printf("3.Add Team\n");
        printf("4.View All Teams\n");
        printf("5.Make a Schedule\n");
        printf("6.View schedule:\n");
        printf("7.Update The Schedule\n");
        printf("8.Delete team");
        printf("9.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            displays();
            break;
        case 2:
            create_team();
            break;
        case 3:
            add_team();
            break;
        case 4:
            display();
            break;
        case 5:
            making_schedule();
            break;
        case 6:
            view_schedule();
            break;
        case 7:
            update_schedule();
            break;
        case 8:
            delete_team();
            break;

        case 9:
            printf("Thank You!");
            break;
        }
    } while (n != 7);
}
