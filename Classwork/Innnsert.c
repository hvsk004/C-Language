#include<stdio.h>

void insert(int v, int k, int a[], int n);

int main()
{
    int n, n1;
    printf("Enter the size of the initial array: ");
    scanf("%d", &n);
    printf("How many elements do you want to insert: ");
    scanf("%d", &n1);
    int a[n+n1];
    for(int i=0; i<n; i++)
    {
        printf("%d index value of the array: ", i);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n1; i++)
    {   
        int v, k;
        printf("Enter the value to be inserted: ");
        scanf("%d", &v);
        printf("Enter the Position of the value: ");
        scanf("%d", &k);
        insert(v, k, a, n+i);
    }
    printf("New Array: ");
    for(int i=0; i<n+n1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void insert(int v, int k, int a[], int n)
{
    for(int i=n-1; i>=k-1; i--)
    {
        a[i+1] = a[i];
    }
    a[k-1] = v;
}

