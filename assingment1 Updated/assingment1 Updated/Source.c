#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {

	/* intiliase variables and assign where required */

	double sales = 0, base_salary = 200, salary, commission_rate = 0.09;
	int status;

	/* inform the user that they will be asked to enter sales */

	printf("You will be asked to enter the sales for your company\n");

	/* start the do loop */

	do
	{
		/* user enters number of sales */

		printf("\nEnter sales in dollars (-1 to end): \n");
		status = scanf("%lf", &sales);

		/* if the sales is a number */

		if (status == 1) {

			/* checking if the sales is >= 0 */

			if (sales >= 0) {
				salary = base_salary + (sales * commission_rate);
				printf("\nSalary is $%.2lf\n", salary);
			}

			/* if the sales is a number but negatuve then tell the user the problem */

			else if (sales < -1) {
				printf("\nPlease input a positive number for sales. If you want to end then enter -1\n");
			}

		}

		/* if the sales is not a number */

		else {
			printf("Invalid input please try again");

			/* break out of the loop if invalid */

			break;
		}

	/* end the loop if the sales equals the sentinel value */

	} while (sales != -1);


	return 0;
}
