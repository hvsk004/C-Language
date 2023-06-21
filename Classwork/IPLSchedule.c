#include <stdio.h>
int main()
{
    int n, n2 = 0;
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
            printf("%s vs %s\n", Team_names[i], Team_names[j]);
        }
        
    }
    return 0;
}
