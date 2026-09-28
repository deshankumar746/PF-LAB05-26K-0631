#include <stdio.h>
int main()
{
    int department;
    int theory,practical,attendance;
    int theoryReq,practicalReq,attendanceReq;
    int remainder;

    printf("University Examination Result Processing System\n");
    printf("\nSelect Department\n");
    printf("1. Computer Science\n");
    printf("2. Electrical Engineering\n");
    printf("3. Business Administration\n");
    printf("4. Mathematics\n");
    printf("Enter department: ");
    scanf("%d",&department);

    printf("\nEnter theory marks: ");
    scanf("%d",&theory);

    printf("Enter practical marks: ");
    scanf("%d",&practical);

    printf("Enter attendance percentage: ");
    scanf("%d",&attendance);

    switch(department)
    {
        case 1:
            theoryReq=50;
            practicalReq=40;
            attendanceReq=75;
            break;
        case 2:
            theoryReq=55;
            practicalReq=45;
            attendanceReq=75;
            break;
        case 3:
            theoryReq=50;
            practicalReq=35;
            attendanceReq=80;
            break;
        case 4:
            theoryReq=60;
            practicalReq=40;
            attendanceReq=75;
            break;
        default:
            printf("Invalid department\n");
            return 0;
    }

    remainder=theory%3;

    printf("\n Examination Result  \n");

    printf("Department: ");

    switch(department)
    {
        case 1:
            printf("Computer Science\n");
            break;
        case 2:
            printf("Electrical Engineering\n");
            break;
        case 3:
            printf("Business Administration\n");
            break;
        case 4:
            printf("Mathematics\n");
            break;
    }

    printf("Theory Marks: %d\n",theory);
    printf("Practical Marks: %d\n",practical);
    printf("Attendance: %d%%\n",attendance);

    printf("\n Passing Requirements \n");
    printf("Theory: At least %d\n",theoryReq);
    printf("Practical: At least %d\n",practicalReq);
    printf("Attendance: At least %d%%\n",attendanceReq);

    printf("\nDistinction: ");
    printf((theory>=85 && practical>=80 && attendance>=90)
           ? "Eligible\n"
           : "Not Eligible\n");

    printf("Seat Category: ");

    if(remainder==0)
        printf("category A\n");
    else if(remainder==1)
        printf("category B\n");
    else
        printf("category C\n");

    printf("\nFinal Result: ");
    printf((theory>=theoryReq && practical>=practicalReq && attendance>=attendanceReq)
           ? "Passed\n"
           : "Failed\n");
    return 0;
}
