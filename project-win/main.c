#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int check(char st[]);
void NameSt();
void Cal(int ans);

int main()
{
    int ans, st1, st2;
    printf("Enter Starting Station\n");
    NameSt();
    scanf("%d", &st1);
    if (st1 < 1 || st1 > 8)
    {
        while (st1 < 1 || st1 > 8)
        {
            printf("You entered wrong information.\n");
            printf("Please enter your information again.\n");
            scanf("%d", &st1);
        }
    }

    printf("Enter Terminal Station\n");
    NameSt();
    scanf("%d", &st2);
    if (st2 < 1 || st2 > 8)
    {
        while (st2 < 1 || st2 > 8)
        {
            printf("You entered wrong information.\n");
            printf("Please enter your information again.\n");
            scanf("%d", &st2);
        }
    }

    ans = abs(st1 - st2);
    Cal(ans);
    return 0;
}

void NameSt()
{
    printf("  1 Suvarnabhumi\n");
    printf("  2 Lat Kbabang\n");
    printf("  3 Ban thap chang\n");
    printf("  4 Hua mak\n");
    printf("  5 Ramkhamhaeng\n");
    printf("  6 Makkasan\n");
    printf("  7 Ratchaparop\n");
    printf("  8 Phaya thai\n");
}

void Cal(int ans)
{
    if (ans == 0)
    {
        printf(" The Price is 15 BATH");
    }
    if (ans == 1)
    {
        printf(" The Price is 15 BATH");
    }
    if (ans == 2)
    {
        printf(" The Price is 20 BATH");
    }
    if (ans == 3)
    {
        printf(" The Price is 25 BATH");
    }
    if (ans == 4)
    {
        printf(" The Price is 30 BATH");
    }
    if (ans == 5)
    {
        printf(" The Price is 35 BATH");
    }
    if (ans == 6)
    {
        printf(" The Price is 40 BATH");
    }
    if (ans == 7)
    {
        printf(" The Price is 45 BATH");
    }
}
