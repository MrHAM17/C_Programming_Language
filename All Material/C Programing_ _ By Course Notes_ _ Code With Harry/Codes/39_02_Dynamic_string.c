// 39_02_storing_data_dynamically_in_string_&_reallocating_memory

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ids[3];   // store the id for every employee, no need to store the length

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the size of the ID of the Employee %d\n", i + 1);
        int len;
        scanf("%d", &len);
        ids[i] = malloc(len + 1);   // no need to cast the pointer, sizeof(char) is always 1

        printf("Enter Employee ID of Employee %d\n", i + 1);
        scanf("%s", ids[i]);   // use fgets here
    }

    for (int i = 0; i < 3; i++)
    {
        printf("ID of Employee %d is %s\n", i + 1, ids[i]);
        free(ids[i]);   // free it when you are done with it
    }

    return 0;
}