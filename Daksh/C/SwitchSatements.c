#include <stdio.h>

int main() {
    int day = 4; // Let's say 4 represents Thursday

    printf("Activities for the day:\n");

    switch (day) {
        case 1: // Monday
            printf("Gym workout\n");
            break;
        case 2: // Tuesday
            printf("Yoga session\n");
            break;
        case 3: // Wednesday
            printf("Team meeting\n");
            break;
        case 4: // Thursday
            printf("Study time\n");
            // Fallthrough to Friday
        case 5: // Friday
            printf("Plan weekend trip\n");
            break;
        case 6: // Saturday
        case 7: // Sunday
            printf("Relax and enjoy\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
