#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{

    char str[20];
    char st[20];

    printf("Enter the strng.\n;");
    fgets(str, 20, stdin);
    printf("Ok!\nSo your string is : %s", str);

    printf("What the element,you have to check in string ?");
    fgets(st, 1, stdin);

    int count = occurence(str, 's');
    printf("Occurences = %d", count);
    return 0;
}