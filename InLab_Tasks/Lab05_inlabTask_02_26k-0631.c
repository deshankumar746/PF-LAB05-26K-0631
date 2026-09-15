#include <stdio.h>

int main()
{
	int department,age,heartRate,consciousness,severity;
	float temperature;
	int emergency=0,critical,senior,tempAlert;
	int remainder;

	printf("1. General Emergency\n");
	printf("2. Cardiology\n");
	printf("3. Neurology\n");
	printf("4. Trauma\n");
	printf("Enter department: ");
	scanf("%d",&department);

	printf("Enter age: ");
	scanf("%d",&age);

	printf("Enter heart rate: ");
	scanf("%d",&heartRate);

	printf("Enter body temperature: ");
	scanf("%f",&temperature);

	printf("Level of consciousness (1=Conscious,0=Unconscious): ");
	scanf("%d",&consciousness);

	printf("Enter severity level (1=Low,2=Medium,3=High): ");
	scanf("%d",&severity);

	switch(department)
	{
		case 1:
			printf("\nDepartment: General Emergency\n");

			switch(severity)
			{
				case 1:
				case 2:
					emergency=0;
					break;

				case 3:
					emergency=1;
					break;

				default:
					printf("Invalid severity level\n");
					return 0;
			}
			break;

		case 2:
			printf("\nDepartment: Cardiology\n");

			switch(heartRate<50||heartRate>120)
			{
				case 0:
					emergency=0;
					break;

				case 1:
					emergency=1;
					break;
			}
			break;

		case 3:
			printf("\nDepartment: Neurology\n");

			switch(consciousness)
			{
				case 1:
					emergency=0;
					break;

				case 0:
					emergency=1;
					break;

				default:
					printf("Invalid consciousness level\n");
					return 0;
			}
			break;

		case 4:
			printf("\nDepartment: Trauma\n");

			switch(severity)
			{
				case 1:
				case 2:
					emergency=0;
					break;

				case 3:
					emergency=1;
					break;

				default:
					printf("Invalid severity level\n");
					return 0;
			}
			break;

		default:
			printf("Invalid department\n");
			return 0;
	}

	critical=(heartRate<50||heartRate>120)&&consciousness==0;
	senior=age>=65;
	tempAlert=temperature<36||temperature>38;

	remainder=(age+heartRate)%4;

	printf("Heart Rate: %d bpm\n",heartRate);
	printf("Body Temperature: %.1f C\n",temperature);

	printf("Department-Specific Priority: ");

	if(emergency)
		printf("Yes\n");
	else
		printf("No\n");

	printf("Critical Condition: ");

	if(critical)
		printf("Yes\n");
	else
		printf("No\n");

	printf("Senior Priority: ");

	if(senior)
		printf("Yes\n");
	else
		printf("No\n");

	printf("Temperature Alert: ");

	if(tempAlert)
		printf("Yes\n");
	else
		printf("No\n");

	printf("Case Category: ");

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
	}

	printf("Final Triage Decision: ");

	if(critical)
		printf("Immediate Medical Attention\n");
	else if(emergency||senior||tempAlert)
		printf("Priority Assessment\n");
	else
		printf("Routine Medical Assessment\n");
	return 0;
}
