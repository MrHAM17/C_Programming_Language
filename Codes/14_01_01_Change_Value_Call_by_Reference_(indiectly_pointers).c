#include <stdio.h>

int main()
{
    float original_value;
    printf("Enter the value that you want to store.\n");
    scanf("%f", &original_value);
    float user_value = original_value;
    
    int add = &original_value;  // for reference
    printf("add is %d.\n",add);  // for reference
    
    float *value = &original_value;///////////////// POINTER means VALUE AT GIVEN LOCATION......
    // change(*value);
    // line 10  will not give the value to the "change" function ; because "value" is pointer that we coded and that time only we've to use " * " like " DATATYPE * NAME_OF_POINTER "
    // otherwise normally we just have to write the "value" ( or NAME_OF_FUNCTION ) and automatically it will point its whatever value is, to the respective function because as it defined pointer by us already.

    change(value); // This is correct way to give the value or data to respective function.
    printf("After changing your original value that is %f ,ten times of it; the new value is : \n%f ", user_value, *value);
    return 0;
}

void change(float *value_1)
{
    (*value_1) = (*value_1) * 10;
    // (*value_1) *= 10;  you can use this step also instead of line no 18... & vice - versa...
}
/// IN LINE 16,18,19 THE DATA TYPE "value_1" is TOTALLY DIFFERENT THAN DATA TYPE "value" AS USED IN ABOVE LINES.
/////// IMPORTANT PLEASE NOTE
//       EVEN THE BOTH DATA TYPES, WE NAMED THE SAME (LIKE value , value) ; THEN THOSE ARE NOT SAME.BECAUSE THOSE ARE THE PARTS OF DIFFERENT FUNCTIONS.AND THOSE WOULD NOT RISE THE ERROR IN PROGRAM.
//       IF YOU WANT TO CHECK, YOU CAN COMMENT OUT THE LINE 16, 18 OR 19 AND REMOVE THE COMMENTS FROM FOLLOWING LINES 26,32. AND CROSS CHECK THIS STATEMENTS.

/*
void change(float *value)
{
    (*value) = (*value) * 10;
    // (*value) *= 10;  you can use this step also instead of line no 29... & vice - versa...
}
*/