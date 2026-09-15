#include <stdio.h>
int main()
{
	int category,destination,age,documents;
	float baggage,allowance;
	int remainder;

	printf("1. Adult\n");
	printf("2. Student\n");
	printf("3. Senior Citizen\n");
	printf("Enter passenger category: ");
	scanf("%d",&category);

	printf("1. Domestic\n");
	printf("2. International\n");
	printf("Enter destination type: ");
	scanf("%d",&destination);

	printf("Enter age: ");
	scanf("%d",&age);

	printf("Enter actual baggage weight: ");
	scanf("%f",&baggage);

	printf("Are travel documents valid? (1=Yes,0=No): ");
	scanf("%d",&documents);

	remainder=age%5;

	switch(category)
	{
		case 1:
			printf("\nPassenger Category: Adult\n");

			switch(destination)
			{
				case 1:
					allowance=20;
					break;

				case 2:
					allowance=30;
					break;

				default:
					printf("Invalid destination type\n");
					return 0;
			}
			break;

		case 2:
			printf("\nPassenger Category: Student\n");

			switch(destination)
			{
				case 1:
					allowance=25;
					break;

				case 2:
					allowance=35;
					break;

				default:
					printf("Invalid destination type\n");
					return 0;
			}
			break;

		case 3:
			printf("\nPassenger Category: Senior Citizen\n");

			switch(destination)
			{
				case 1:
					allowance=30;
					break;

				case 2:
					allowance=40;
					break;

				default:
					printf("Invalid destination type\n");
					return 0;
			}
			break;

		default:
			printf("Invalid passenger category\n");
			return 0;
	}

	printf("Destination Type: %s\n",destination==1?"Domestic":"International");
	printf("Permitted Baggage Allowance: %.2f kg\n",allowance);
	printf("Actual Baggage Weight: %.2f kg\n",baggage);

	if(documents==1)
		printf("Document Status: Valid\n");
	else
		printf("Document Status: Invalid\n");

	if(documents==0)
	{
		printf("Final Boarding Decision: Denied Boarding\n");
		return 0;
	}

	printf("Verification Category: ");

	switch(remainder)
	{
		case 0:
			printf("Category A\n");
			break;

		case 1:
			printf("Category B\n");
			break;

		case 2:
			printf("Category C\n");
			break;

		case 3:
			printf("Category D\n");
			break;

		case 4:
			printf("Category E\n");
			break;
	}

	if(category==3)
		printf("Priority Assistance: You are given priority because you are a Senior Citizen\n");
	else if(category==2&&destination==2)
		printf("Priority Assistance: You are given priority because you are an International Student\n");
	else
		printf("Priority Assistance: No\n");

	printf("Final Boarding Decision: ");

	if(baggage<=allowance)
		printf("Normal Boarding");
	else
		printf("Enhanced Baggage Screening");
	return 0;
}
