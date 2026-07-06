#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;

    printf("===== Triangle Angle Finder =====\n");

    printf("Enter First Angle: ");
    scanf("%d", &angle1);

    printf("Enter Second Angle: ");
    scanf("%d", &angle2);

    angle3 = 180 - (angle1 + angle2);

    if (angle3 > 0)
    {
        printf("Third Angle = %d", angle3);
    }
    else
    {
        printf("Invalid Angles!");
    }

    return 0;
}