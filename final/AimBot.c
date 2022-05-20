#include<stdio.h>
#include<string.h>
#include<math.h>

struct Entity{
    int id;
    char name[200];
    char type[20]; // ชนิดของ Entity มี "player" และ "item"
    char player_character[50];
    double distance;
    int is_glow;
    int is_alive;
};

int main()
{
    int num;
    char check[100];
    scanf("%d", &num);
    struct Entity player[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d %s %s %s %lf %d %d", 
        &player[i].id, player[i].name, player[i].type, player[i].player_character, 
        &player[i].distance, &player[i].is_glow, &player[i].is_alive);
    }
    scanf("%s", check);
    if (strcmp("Glow", check) == 0)
    {
        for (int i = 0; i < num; i++)
        {
            printf("%d %s %s %s %.2lf 1 %d\n", 
            player[i].id, player[i].name, player[i].type, player[i].player_character, 
            player[i].distance, player[i].is_alive);
        }
    }
    if (strcmp("KillThemAll", check) == 0)
    {
        for (int i = 0; i < num; i++)
        {
            if (strcmp("player", player[i].type) == 0)
            {
                printf("%d %s %s %s %.2lf %d 0\n", 
            player[i].id, player[i].name, player[i].type, player[i].player_character, 
            player[i].distance, player[i].is_glow);
            }
            else
            {
                printf("%d %s %s %s %.2lf %d %d\n", 
            player[i].id, player[i].name, player[i].type, player[i].player_character, 
            player[i].distance, player[i].is_glow, player[i].is_alive);
            }
        }
    }
    if (strcmp("NearestP", check) == 0)
    {
        for (int i = 0; i < num; i++)
        {
            if (strcmp("player", player[i].type) == 0 && player[i].distance < 100.00)
            {
                printf("%d %s %.2lf\n", 
            player[i].id, player[i].name, player[i].distance);
            }
        }
    }
    if (strcmp("NearestItem", check) == 0)
    {
        for (int i = 0; i < num; i++)
        {
            if (strcmp("item", player[i].type) == 0 && player[i].distance < 200.00)
            {
                printf("%d %s %.2lf\n", 
            player[i].id, player[i].name, player[i].distance);
            }
        }
    }
    return 0;
}
