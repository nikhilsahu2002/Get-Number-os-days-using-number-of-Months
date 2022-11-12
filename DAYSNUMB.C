#include<stdio.h>
#include<conio.h>
void main()
{
int month=0;
clrscr();
printf("Enter the month Number ");
scanf("%d",&month);
switch (month){
	case 1:
		printf("30 Days");
		break;
	case 2:
		printf("28 or 29 Days");
		break;
	case 3:
		printf("30 Days");
		break;
	case 4:
		printf("31 Days");
		break;
	case 5:
		printf("30 Days");
		break;

	case 6:
		printf("31 Days");
		break;
	case 7:
		printf("30 Days");
		break;
	case 8:
		printf("31 Days");
		break;
	case 9:
		printf("30 Days");
		break;
	case 10:
		printf("31 Days");
		break;
	case 11:
		printf("30 Days");
		break;
	case 12:
		printf("31 Days");
		break;
	default:
		printf("Please enter the valid data");
		break;
}
getch();
}






