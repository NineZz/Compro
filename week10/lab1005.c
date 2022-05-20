#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
};

void playing_decision(struct Weather weat);

int main(){
    int days, i = 0;

    scanf("%d", &days);

    struct Weather weat[days];

    while (i < days){
        scanf("%s %d %d %c", weat[i].outlook, &weat[i].temperature, &weat[i].humidity, &weat[i].wind);
        i++;
    }

    for (int j = 0;j < days;j++){
        playing_decision(weat[j]);
    }

    return 0;
}

void playing_decision(struct Weather weat){
    if(strcmp(weat.outlook, "overcast") == 0){
        printf("yes\n");
    }
    else if(strcmp(weat.outlook, "rain") == 0){
        if(weat.wind == 'F'){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    else if(strcmp(weat.outlook, "sunny") == 0){
        if(weat.humidity > 77.5){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
}
