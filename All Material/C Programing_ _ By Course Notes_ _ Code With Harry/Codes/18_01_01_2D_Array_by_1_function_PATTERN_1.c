#include <stdio.h>

int main()
{
    int n_people;
    int n_data;

    printf("How many person's data you have to store ?\n ");
    scanf("%d", &n_people);

    printf("How much data you have to store for every single person ?\n ");
    scanf("%d", &n_data);

    int data[n_people][n_data];

    for (int i = 0; i < n_people; i++)
    {
        for (int j = 0; j < n_data; j++)
        {
            printf("Enter person %d's data %d .\n", i + 1, j + 1);
            scanf("%d", &data[i][j]);
        }
    }

    for (int i = 0; i < n_people; i++)
    {
        printf("\n");
        for (int j = 0; j < n_data; j++)
        {
            printf("Your confedential  person %d's data %d is %d.\t", i + 1, j + 1, data[i][j]);
            
        }
    }
    return 0;
}
