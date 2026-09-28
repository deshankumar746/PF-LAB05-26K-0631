#include <stdio.h>
int main()
{
    int status=0;
    int operation,device,mode;

    printf("Smart Home Security Controller\n");

    printf("\nSelect Operation\n");
    printf("1. Activate Device\n");
    printf("2. Deactivate Device\n");
    printf("3. Check Status\n");
    printf("4. Toggle Device\n");
    printf("5. Security Mode\n");
    printf("Enter your choice: ");
    scanf("%d",&operation);
    switch(operation)
    {
        case 1:
            printf("\nSelect Device\n");
            printf("1. Main Door Lock\n");
            printf("2. Alarm System\n");
            printf("3. CCTV Camera\n");
            printf("4. Motion Sensor\n");
            printf("Enter device: ");
            scanf("%d",&device);
            switch(device)
            {
                case 1:
                    status=status|1;
                    printf("Main Door Lock activated\n");
                    break;
                case 2:
                    status=status|2;
                    printf("Alarm System activated\n");
                    break;
                case 3:
                    status=status|4;
                    printf("CCTV Camera activated\n");
                    break;
                case 4:
                    status=status|8;
                    printf("Motion Sensor activated\n");
                    break;
                default:
                    printf("Invalid device\n");
            }
            break;
        case 2:
            printf("\nSelect Device\n");
            printf("1. Main Door Lock\n");
            printf("2. Alarm System\n");
            printf("3. CCTV Camera\n");
            printf("4. Motion Sensor\n");
            printf("Enter device: ");
            scanf("%d",&device);

            switch(device)
            {
                case 1:
                    status=status&~1;
                    printf("Main Door Lock deactivated\n");
                    break;
                case 2:
                    status=status&~2;
                    printf("Alarm System deactivated\n");
                    break;
                case 3:
                    status=status&~4;
                    printf("CCTV Camera deactivated\n");
                    break;
                case 4:
                    status=status&~8;
                    printf("Motion Sensor deactivated\n");
                    break;
                default:
                    printf("Invalid device\n");
            }
            break;
        case 3:
            printf("\nSelect Device\n");
            printf("1. Main Door Lock\n");
            printf("2. Alarm System\n");
            printf("3. CCTV Camera\n");
            printf("4. Motion Sensor\n");
            printf("Enter device: ");
            scanf("%d",&device);

            switch(device)
            {
                case 1:
                    printf((status&1) ? "Main Door Lock is ACTIVE\n" : "Main Door Lock is INACTIVE\n");
                    break;
                case 2:
                    printf((status&2) ? "Alarm System is ACTIVE\n" : "Alarm System is INACTIVE\n");
                    break;
                case 3:
                    printf((status&4) ? "CCTV Camera is ACTIVE\n" : "CCTV Camera is INACTIVE\n");
                    break;
                case 4:
                    printf((status&8) ? "Motion Sensor is ACTIVE\n" : "Motion Sensor is INACTIVE\n");
                    break;
                default:
                    printf("Invalid device\n");
            }
            break;
        case 4:
            printf("\nSelect Device\n");
            printf("1. Main Door Lock\n");
            printf("2. Alarm System\n");
            printf("3. CCTV Camera\n");
            printf("4. Motion Sensor\n");
            printf("Enter device: ");
            scanf("%d",&device);
            switch(device)
            {
                case 1:
                    status=status^1;
                    printf("Main Door Lock toggled\n");
                    break;
                case 2:
                    status=status^2;
                    printf("Alarm System toggled\n");
                    break;
                case 3:
                    status=status^4;
                    printf("CCTV Camera toggled\n");
                    break;
                case 4:
                    status=status^8;
                    printf("Motion Sensor toggled\n");
                    break;
                default:
                    printf("Invalid device\n");
            }
            break;
        case 5:
            printf("\nSelect Security Mode\n");
            printf("1. Home Mode\n");
            printf("2. Away Mode\n");
            printf("3. Night Mode\n");
            printf("Enter mode: ");
            scanf("%d",&mode);

            switch(mode)
            {
                case 1:
                    status=status|1|4;
                    printf("Home Mode activated\n");
                    break;
                case 2:
                    status=status|1|2|4|8;
                    printf("Away Mode activated\n");
                    break;
                case 3:
                    status=status|1|2|8;
                    printf("Night Mode activated\n");
                    break;
                default:
                    printf("Invalid mode\n");
            }
            break;

        default:
            printf("Invalid operation\n");
    }

    printf("\n Security Status  \n");

    printf("Main Door Lock  : %d  ",(status&1) ? 1 : 0);
    printf((status&1) ? "ACTIVE\n" : "INACTIVE\n");

    printf("Alarm System     : %d  ",(status&2) ? 1 : 0);
    printf((status&2) ? "ACTIVE\n" : "INACTIVE\n");

    printf("CCTV Camera      : %d  ",(status&4) ? 1 : 0);
    printf((status&4) ? "ACTIVE\n" : "INACTIVE\n");

    printf("Motion Sensor    : %d  ",(status&8) ? 1 : 0);
    printf((status&8) ? "ACTIVE\n" : "INACTIVE\n");

    printf("\n4-bit status: %d%d%d%d\n",
           (status&8)? 1: 0,
           (status&4)? 1: 0,
           (status&2)? 1: 0,
           (status&1)? 1: 0);

    if((status&1) && (status&2) && (status&4) && (status&8))
        printf("Security System is FULLY ARMED\n");
    else
        printf("Security System is NOT FULLY ARMED\n");

    printf("\nShift demonstration: %d << 1 = %d\n",1,1<<1);
    printf("Bit values: 1, %d, %d, %d\n",1<<1,1<<2,1<<3);
    return 0;
}
