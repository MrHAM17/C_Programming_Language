#include <stdio.h>
int main()
{
    float area, length, breadth, height, inner_radius, outer_radius, base, diagonal_1, diagonal_2, side, perimeter;
    int choice, way;
    printf("\nAre you looking for which shape's area ?\n\n");
    printf(" 1.  For Simple Triangle       \n");
    printf(" 2.  For Equilateral Triangle  \n");
    printf(" 3.  For Right Angle Triangle  \n");
    printf(" 4.  For Rectangle             \n");
    printf(" 5.  For Square                \n");
    printf(" 6.  For Rhombus               \n");
    printf(" 7.  For Parallelogram         \n");
    printf(" 8.  For Trapezium             \n");
    printf(" 9.  For Ring                  \n");
    printf("10.  For Circle                \n");
    printf("11.  For Semicircle            \n");
    printf("12.  For Sector of Circle      \n");
    printf("13.  For Segment of Circle     \n");
    printf("14.  For Hexagon               \n");
    printf("15.  For Octagon               \n");
    //  printf("16.  For Regular Polygon       \n");  very complex shape at present,that's why skipping now...........

    printf("\nSo for to the desire shape,enter respective serial number.\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        //////////////////////////////  HERE ALSO WE CAN FIND AREA BY PERIMETER INSTEAD OF USING SIDE......BUT
        //////////////////////////////  MAY BE SWITCH UNDER SWITCH IS NOT WORK........................... /////////////////////

        printf("For the respective Simple Triangle :\nIf you having values of base & height, then enter 1.\n\t\toR\n");
        printf("If you having values of perimeter and all sides of triangle, then enter 2.\n");
        scanf("%d", &way);
        switch (way)
        {
        case 1:

            printf("Ok!\n\nAs you are looking for Simple Triangle :-\n");
            printf("Enter the length of base of triangle       : ");
            scanf("%f", &base);
            printf("Enter the height of triangle               : ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("So,your area of desired Simple Triangle is : %f sq.units.", area);
            return 0;
           // break;

        case 2:
            printf("Ok!\n\nAs you are looking for Simple Triangle :-\n");
            printf("Enter the value of perimeter of triangle       : ");
            scanf("%f", &perimeter);
            printf("Enter the length of 1st side                   : ");
            scanf("%d", &length);
            printf("Enter the length of 2nd side                   : ");
            scanf("%d", &breadth);
            printf("Enter the length of 3rd side                   : ");
            scanf("%d", &height);

            area = perimeter * (perimeter - length) * (perimeter - breadth) * (perimeter - height);
            printf("So,your area's square of desired Simple Triangle is : %f sq.units.", area);
            printf("\nIf you want only value of area,then simply take square root of final answer !");
            return 0;
            //break;

        default:
            printf("\nSorry.\nYou have not sufficient data for to find area of Simple Triangle !");
            return 0;
            //break;
        }

    case 2:
        //////////////////////////////  HERE ALSO WE CAN FIND AREA BY DIAGONAL INSTEAD OF USING SIDE......BUT
        //////////////////////////////  MAY BE SWITCH UNDER SWITCH IS NOT WORK........................... /////////////////////

        printf("Ok!\n\nAs you are looking for Equilateral Triangle :-\n");
        printf("Enter the length of side of triangle            : ");
        scanf("%f", &base);
        area = (0.433012702) * (base * base); // ((under root 3)/4) * (base * base)
        printf("So,your area of desired Equilateral Triangle is : %f sq.units.", area);
        break;

    case 3:
        printf("Ok!\n\nAs you are looking for Right Angle Triangle :-\n");
        printf("Enter the length of 1st side(base) of right angle triangle,except hypotenius   : ");
        scanf("%f", &base);
        printf("Enter the length of 2nd side(height) of right angle triangle,except hypotenius : ");
        scanf("%f", &height);
        area = 0.5 * (base * height);
        printf("So,your area of desired Right Angle Triangle is                                : %f sq.units.", area);
        break;

    case 4:
        printf("Ok!\n\nAs you are looking for Rectangle :-\n");
        printf("Enter the length of rectangle        : ");
        scanf("%f", &length);
        printf("Enter the breadth of rectangle       : ");
        scanf("%f", &breadth);
        area = length * breadth;
        printf("So,your area of desired Rectangle is : %f sq.units.", area);
        break;

    case 5:
        printf("Ok!\n\nAs you are looking for Square :-\n");
        printf("Enter the length of side of square : ");
        scanf("%f", &base);
        area = (base * base);
        printf("So,your area of desired Square is  : %f sq.units.", area);
        break;

    case 6:
        printf("Ok!\n\nAs you are looking for Rhombus :-\n");
        printf("Enter the length of 1st diagonal of rhombus : ");
        scanf("%f", &diagonal_1);
        printf("Enter the length of 2nd diagonal of rhombus : ");
        scanf("%f", &diagonal_2);
        area = 0.5 * (diagonal_1 * diagonal_2);
        printf("So,your area of desired Rhombus is          : %f sq.units.", area);
        break;

    case 7:
        printf("Ok!\n\nAs you are looking for Parallelogram :-\n");
        printf("Enter the length of base of parallelogram : ");
        scanf("%f", &base);
        printf("Enter the height of parallelogram         : ");
        scanf("%f", &height);
        area = base * height;
        printf("So,your area of desired Parallelogram is  : %f sq.units.", area);
        break;

    case 8:
        printf("Ok!\n\nAs you are looking for Trapezium :-\n");
        printf("Enter the length of 1st parallel side of trapezium : ");
        scanf("%f", &length);
        printf("Enter the length of 2nd parallel side of trapezium : ");
        scanf("%f", &base);
        printf("Enter the height of trapezium                      : ");
        scanf("%f", &height);
        area = (0.5 * (length + base)) * (height);
        printf("So,your area of desired Trapezium is               : %f sq.units.", area);
        break;

    case 9:
        printf("Ok!\n\nAs you are looking for Ring :-\n");
        printf("Enter the length of inner radius of ring : ");
        scanf("%f", &inner_radius);
        printf("Enter the length of outer radius of ring : ");
        scanf("%f", &outer_radius);
        area = 3.14159265 * ((outer_radius * outer_radius) - (inner_radius * inner_radius));
        printf("So,your area of desired Ring is          : %f sq.units.", area);
        break;

    case 10:
        printf("Ok!\n\nAs you are looking for Circle :-\n");
        printf("Enter the length of radius of circle : ");
        scanf("%f", &inner_radius);
        area = 3.14159265 * (inner_radius * inner_radius);
        printf("So,your area of desired Circle is    : %f sq.units.", area);
        break;

    case 11:
        printf("Ok!\n\nAs you are looking for Semicircle :-\n");
        printf("Enter the length of radius of semicircle : ");
        scanf("%f", &inner_radius);
        area = 0.5 * (3.14159265 * (inner_radius * inner_radius));
        printf("So,your area of desired Semicircle is    : %f sq.units.", area);
        break;

    case 12:
        //////////////////////////////  HERE ALSO WE CAN FIND AREA BY THETA INSTEAD OF USING ARC-LENGTH......BUT
        //////////////////////////////  MAY BE SWITCH UNDER SWITCH IS NOT WORK........................... /////////////////////

        printf("Ok!\n\nAs you are looking for Sector of Circle :-\n");
        printf("Enter the length of arc of sector of circle    : ");
        scanf("%f", &length);
        printf("Enter the length of radius of sector of circle : ");
        scanf("%f", &inner_radius);
        area = 0.5 * (length * inner_radius);
        printf("So,your area of desired Sector of Circle is    : %f sq.units.", area);
        break;

    case 13:
        //////////////////////////////  HERE ALSO WE CAN FIND AREA BY THETA INSTEAD OF USING TOTAL AREA MINOUS UNWANTED AREA......BUT
        //////////////////////////////  MAY BE SWITCH UNDER SWITCH IS NOT WORK........................... //////////////////////////

        printf("Ok!\n\nAs you are looking for Segment of Circle :-\n");
        printf("Enter the length of arc of sector of circle    : ");
        scanf("%f", &length);
        printf("Enter the length of radius of sector of circle : ");
        scanf("%f", &inner_radius);

        printf("\nEnter the base of triangle                     : ");
        scanf("%f", &base);
        printf("Enter the height of triangle                   : ");
        scanf("%f", &height);

        area = (0.5 * (length * inner_radius)) - (0.5 * base * height);
        if (area < 0)
        {
            area = area * (-1);
        }
        printf("So,your area of desired Segment of Circle is   : %f sq.units.", area);
        break;

    case 14:
        printf("Ok!\n\nAs you are looking for Hexagon :-\n");
        printf("Enter the length of side of hexagon : ");
        scanf("%f", &side);
        area = 2.59807621 * (side * side); //  (3.root3)/4=2.59807621
        printf("So,your area of desired Hexagon is  : %f sq.units.", area);
        break;

    case 15:
        printf("Ok!\n\nAs you are looking for Octagon :-\n");
        printf("Enter the length of side of octagon : ");
        scanf("%f", &side);
        area = 4.82842712 * (side * side); //  2+2.root2=4.82842712
        printf("So,your area of desired Octagon is  : %f sq.units.", area);
        break;

    default:

        printf("Sorry.\nYou have entered Wrong Choice!\nPlease enter the choice between above 1 to 15 only!");
        break;
    }
    return 0;
}
