#include <stdio.h>

int main()
{
    int product,customer;
    int distance,orderNumber;
    float orderAmount,discountPercent;
    float discountAmount,finalAmount;
    float deliveryCharge,priorityCharge,totalAmount;

    printf("E-Commerce Order Processing System\n");
    printf("\nSelect Product Category\n");
    printf("1. Electronics\n");
    printf("2. Clothing\n");
    printf("3. Books\n");
    printf("4. Household\n");
    printf("Enter product category: ");
    scanf("%d",&product);

    printf("\nSelect Customer Category\n");
    printf("1. Regular\n");
    printf("2. Premium\n");
    printf("3. Corporate\n");
    printf("Enter customer category: ");
    scanf("%d",&customer);

    printf("\nEnter order amount: ");
    scanf("%f",&orderAmount);

    printf("Enter delivery distance in km: ");
    scanf("%d",&distance);

    printf("Enter order number: ");
    scanf("%d",&orderNumber);

    discountPercent=0;

    switch(product)
    {
        case 1:
            switch(customer)
            {
                case 1:
                    discountPercent=5;
                    break;
                case 2:
                    discountPercent=10;
                    break;
                case 3:
                    discountPercent=15;
                    break;
                default:
                    printf("Invalid customer category\n");
                    return 0;
            }
            break;

        case 2:
            switch(customer)
            {
                case 1:
                    discountPercent=10;
                    break;
                case 2:
                    discountPercent=15;
                    break;
                case 3:
                    discountPercent=20;
                    break;
                default:
                    printf("Invalid customer category\n");
                    return 0;
            }
            break;

        case 3:
            switch(customer)
            {
                case 1:
                    discountPercent=8;
                    break;
                case 2:
                    discountPercent=12;
                    break;
                case 3:
                    discountPercent=18;
                    break;
                default:
                    printf("Invalid customer category\n");
                    return 0;
            }
            break;

        case 4:
            switch(customer)
            {
                case 1:
                    discountPercent=7;
                    break;
                case 2:
                    discountPercent=14;
                    break;
                case 3:
                    discountPercent=20;
                    break;
                default:
                    printf("Invalid customer category\n");
                    return 0;
            }
            break;

        default:
            printf("Invalid product category\n");
            return 0;
    }

    discountAmount=orderAmount*discountPercent/100;
    finalAmount=orderAmount-discountAmount;

    deliveryCharge=0;

    if(finalAmount>=5000||customer==2 ||customer==3)
    {
        deliveryCharge=0;
    }
    else
    {
        deliveryCharge=distance*50;
    }

    priorityCharge=0;

    if((customer==2||customer==3) && orderAmount>=10000)
    {
        priorityCharge=500;
    }

    totalAmount=finalAmount+deliveryCharge+priorityCharge;

    printf("\n Order Report \n");

    printf("Product Category: ");

    switch(product)
    {
        case 1:
            printf("Electronics\n");
            break;

        case 2:
            printf("Clothing\n");
            break;

        case 3:
            printf("Books\n");
            break;

        case 4:
            printf("Household\n");
            break;
    }

    printf("Customer Category: ");

    switch(customer)
    {
        case 1:
            printf("Regular\n");
            break;
        case 2:
            printf("Premium\n");
            break;
        case 3:
            printf("Corporate\n");
            break;
    }

    printf("Original Order Amount=Rs.%.2f\n",orderAmount);
    printf("Discount=%.0f%%\n",discountPercent);
    printf("Discount Amount=Rs.%.2f\n",discountAmount);
    printf("Final Payable Amount=Rs. %.2f\n",finalAmount);
    printf("Delivery Distance=%d km\n",distance);

    printf("Shipping Status= ");
    printf((finalAmount>=5000||customer==2||customer==3)
           ? "Free Shipping\n"
           : "Paid Shipping\n");

    printf("Delivery Charges=Rs.%.2f\n",deliveryCharge);

    printf("Priority Delivery= ");
    printf(((customer==2||customer==3)&& orderAmount>=10000)
           ? "Yes\n"
           : "No\n");

    printf("Priority Charges=Rs.%.2f\n",priorityCharge);

    printf("Processing Group= ");

    if(orderNumber%4==0)
        printf("Group A\n");
    else if(orderNumber%4==1)
        printf("Group B\n");
    else if(orderNumber%4==2)
        printf("Group C\n");
    else
        printf("Group D\n");

    printf("Total Amount Payable=Rs.%.2f\n",totalAmount);
    return 0;
}
