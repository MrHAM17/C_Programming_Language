#include <stdio.h>
struct book
{
    int price;
    char title[80];
    char author[80];
};

void accept(struct book list[100]); // func declare
void display(struct book list[100]);
void bsortAsc(struct book list[80]);

void main()
{
    struct book data[20];
    int n;
    // clrscr();
    accept(data); // func call
    bsortAsc(data);
    display(data);
    // getch();
}

void accept(struct book list[100]) // func initialize
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter title : ");
        scanf("%s", &list[i].title);
        printf("Enter Author name: ");
        scanf("%s", &list[i].author);
        printf("Enter price : ");
        scanf("%d", &list[i].price);
    }
}

void display(struct book list[100])
{
    int i;
    printf("\n\nTitle\t\tAuthor\t\tprice\n");
    printf("-------------------------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t\t%s\t\t%d\n", list[i].title, list[i].author, list[i].price);
    }
}

void bsortAsc(struct book list[80])
{
    int i, j;
    struct book temp;
    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (list[i].price > list[j ].price)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}
