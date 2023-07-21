
/////////////* IN MULTIPLICATION TABLES WE NOT PASSED DATA FROM 2D ARRAY.
//                  EVEN WE TRIED THIS IN BELOW CODE, 
  //                         BUT IT IS INDIERCTLY CONVERTED INTO 1D ARRAY...
    //                         99% YOU CAN SAY IT IS 1D ARRAY & 1% YOU CAN SAY IT IS 2D ARRAY............

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// IN 2D ARRAY  WE HAVE ONLY 2 COMBINATIONS TO WRITE THE CODE OF THIS PROBLEM ::
//         1.BELOW CODE ::             DATA COLLECECT BY MAIN FUNCTION
//                                     CALCULATED & DISPLAY BY 2ND FUNCTION

//         2.REMAINED COMBINATION :: AS SAME AS OF THE 1D ARRAY.........SO ITS NOW EASY FOR ME TO CODE....

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////      BUT BECAUSE OF HEAVY PRACTICE OF COBINATIONS FROM 1D ARRAY:: NOW I LEAVING THE REMAINED COMBINATIONS FROM 2D ARRAY...////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////







#include<stdio.h>
void printTable(int *mulTable, int num, int n){
    printf("The multiplication table of %d is :\n", num);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }

    for(int i=0; i<n; i++){
        printf("%dX%d = %d\n", num, i+1, mulTable[i]);
    }
    printf("******************************************************\n\n");
}

int main(){
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);

    return 0;
}