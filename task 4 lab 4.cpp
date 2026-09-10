#include <stdio.h>

int main()
{
    float accuracy, latency;
    int approval;

    printf("Enter model accuracy (%%): ");
    scanf("%f", &accuracy);

    printf("Enter prediction latency (ms): ");
    scanf("%f", &latency);

    printf("Enter model approval status (1 = Approved, 0 = Not Approved): ");
    scanf("%d", &approval);

    if (accuracy >= 90 && latency <= 100 && approval == 1)
    {
        printf("Model can be deployed.\n");
    }
    else
    {
        printf("Model cannot be deployed.\n");

        if (accuracy < 90)
        {
            printf("Reason: Accuracy too low\n");
        }

        if (latency > 100)
        {
            printf("Reason: Latency too high\n");
        }

        if (approval == 0)
        {
            printf("Reason: Model not approved\n");
        }
    }

    return 0;
}
