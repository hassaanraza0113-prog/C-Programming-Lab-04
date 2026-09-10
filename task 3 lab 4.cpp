#include <stdio.h>

int main()
{
    int totalRecords, missingRecords, duplicateRecords;
    float missingPercentage, duplicatePercentage;

    printf("Enter total number of records: ");
    scanf("%d", &totalRecords);

    printf("Enter number of missing records: ");
    scanf("%d", &missingRecords);

    printf("Enter number of duplicate records: ");
    scanf("%d", &duplicateRecords);

    if (totalRecords <= 0)
    {
        printf("Invalid Dataset\n");
    }
    else
    {
        missingPercentage = (missingRecords * 100.0) / totalRecords;
        duplicatePercentage = (duplicateRecords * 100.0) / totalRecords;

        printf("Missing Data Percentage = %.2f%%\n", missingPercentage);

        if (missingPercentage > 30)
        {
            printf("Poor Quality Dataset\n");
        }
        else if (duplicatePercentage > 20)
        {
            printf("Dataset Requires Cleaning\n");
        }
        else
        {
            printf("Dataset Ready for Training\n");
        }
    }

    return 0;
}
