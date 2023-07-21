// Write a C-program to create array of structures in order to store details of almost 100 books. The book details are book name, book price, book page number and book author name.

// Program :

#include <stdio.h>
//#include <conio.h>
struct book
{
    int price;
    char title[80];
    char author[80];
};
void accept(struct book list[100]); // func declare
void display(struct book list[100]);
void main()
{
    struct book data[20];
    int n;
    // clrscr();
    accept(data); // func call
    display(data);
    // getch();
}
void accept(struct book list[100]) // func initialize
{
    int i;
    for (i = 0; i < 2; i++)
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
    for (i = 0; i < 2; i++)
    {
        printf("%s\t\t%s\t\t%d\n", list[i].title, list[i].author, list[i].price);
    }
}