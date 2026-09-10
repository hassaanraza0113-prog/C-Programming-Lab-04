#include <stdio.h>

int main()
{
    int role, status, security;

    printf("Enter user role (1 = Admin, 2 = Researcher, 3 = Student): ");
    scanf("%d", &role);

    printf("Enter account status (1 = Active, 0 = Inactive): ");
    scanf("%d", &status);

    printf("Enter security level: ");
    scanf("%d", &security);

    if (status == 0)
    {
        printf("Access Denied\n");
    }
    else if (role == 1)
    {
        if (security >= 3)
            printf("Admin Access Granted\n");
        else
            printf("Access Denied\n");
    }
    else if (role == 2)
    {
        if (security >= 2)
            printf("Researcher Access Granted\n");
        else
            printf("Access Denied\n");
    }
    else if (role == 3)
    {
        if (security >= 1)
            printf("Student Access Granted\n");
        else
            printf("Access Denied\n");
    }
    else
    {
        printf("Invalid User Role\n");
    }

    return 0;
}
