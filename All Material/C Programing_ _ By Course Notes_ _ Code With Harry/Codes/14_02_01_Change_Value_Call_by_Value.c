#include <stdio.h>


/////////////////////// HERE AIM OF CODE IS : VALUE IS NOT CHANGE BY USING CALL_BY_VALUE...........
// SO CODE IS NOT WRONG; IF SUPPOSE YOU RUN THE CODE & VALUE WILL NOT CHANGE...
// CODE IS PERFECT , AS IT SHOWS VALUE WILL CHANGE ORIGINALLY, BY ONLY CALL_BY_REFERENCE..

int main()
{
    float original_value;
    printf("Enter the value that you want to store.\n");
    scanf("%f", &original_value);

    float user_value = original_value;

    change(original_value);

    printf("\nAfter changing your original value that is %f ,ten times of it; the new value is : \n%f ", user_value, original_value);
    return 0;
}

void change(float original_value_given)
{
    float temp = original_value_given;
    (original_value_given) = (original_value_given)*10;
    printf("changing your original value that is %f ,ten times of it; in the COPY the new value is : \n%f ", temp, original_value_given);

}