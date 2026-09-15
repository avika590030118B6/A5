#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (year > 0)
    {
        if (month >= 1 && month <= 12)
        {
            if (day >= 1)
            {
                if (month == 1 || month == 3 || month == 5 ||
                    month == 7 || month == 8 || month == 10 ||
                    month == 12)
                {
                    if (day <= 31)
                        printf("Valid date");
                    else
                        printf("Invalid date");
                }
                else
                {
                    if (month == 4 || month == 6 ||
                        month == 9 || month == 11)
                    {
                        if (day <= 30)
                            printf("Valid date");
                        else
                            printf("Invalid date");
                    }
                    else
                    {
                        if (month == 2)
                        {
                            if ((year % 400 == 0) ||
                                (year % 4 == 0 && year % 100 != 0))
                            {
                                if (day <= 29)
                                    printf("Valid date");
                                else
                                    printf("Invalid date");
                            }
                            else
                            {
                                if (day <= 28)
                                    printf("Valid date");
                                else
                                    printf("Invalid date");
                            }
                        }
                    }
                }
            }
            else
            {
                printf("Invalid date");
            }
        }
        else
        {
            printf("Invalid date");
        }
    }
    else
    {
        printf("Invalid date");
    }

    return 0;
}