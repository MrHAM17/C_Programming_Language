#include <stdio.h>
int main()
{
	int choice;
	float miles, foot, inches, kg, meters, km, inch, cm, pound, i, celcius, fahreinheit, seconds, milliseconds, gigabytes, megabytes;

	int ch;
	printf("Enter 1 if you want to perform conversions:\n");
	printf("Enter 2 if you do not want to perform conversions:\n");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
		printf("Lets perform conversions of units:\n");

		printf("Enter 1 to convert kilometers to miles\n");
		printf("Enter 2 to convert inches to foot\n");
		printf("Enter 3 to convert centimeters to inches\n");
		printf("Enter 4 to convert pound to kilogramms\n");
		printf("Enter 5 to convert inches to meters\n");
		printf("Enter 6 to convert celcius to fahreinheit\n");
		printf("Enter 7 to convert seconds to milliseconds\n");
		printf("Enter 8 to convert gigabytes to megabytes\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("Enter the given kilometers:\n");
			scanf("%f", &km);
			miles = km * 0.621371;
			printf("Its conversion in miles is \n %f", miles);
			break;

		case 2:
			printf("Enter the given inches :\n");
			scanf("%f", &inch);
			foot = inch * 0.08333;
			printf("Its conversion in foot is \n %f", foot);
			break;

		case 3:
			printf("Enter the given centimeters:\n");
			scanf("%f", &cm);
			inches = cm * 0.393701;
			printf("Its conversion in inches is \n %f", inches);
			break;

		case 4:
			printf("Enter the given pound:\n");
			scanf("%f", &pound);
			kg = pound * 0.453592;
			printf("Its conversion in kilograms is \n %f", kg);
			break;

		case 5:
			printf("Enter the given inches:\n");
			scanf("%f", &i);
			meters = i * 0.0254;
			printf("Its conversion in meters is \n %f", meters);
			break;

		case 6:
			printf("Enter the given celcius:\n");
			scanf("%f", &celcius);
			fahreinheit = (celcius * 9 / 5) + 32;
			printf("Its conversion in fahreinheit is \n %f", fahreinheit);
			break;

		case 7:
			printf("Enter the given seconds:\n");
			scanf("%f", &seconds);
			milliseconds = seconds * 1000;
			printf("Its conversion in milliseconds is \n %f", milliseconds);
			break;

		case 8:
			printf("Enter the given gigabytes:\n");
			scanf("%f", &gigabytes);
			megabytes = gigabytes * 1024;
			printf("Its conversion in megabytes is \n %f", megabytes);
			break;

		default:
			printf("Wrong Choice!!\n");
			break;
		}
		break;

	case 2:
		printf("You choosed not to perform any conversions\n");
		printf("Have a nice day!\n");
		break;

	default:
		printf("Wrong Choice!!\n");
		break;
	}
	return 0;
}