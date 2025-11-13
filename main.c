#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int energy;
} Player;

void generatePlayers(Player players[], int n, int initEnergy)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("플레이어 %d 이름 입력: ", i + 1);
        scanf("%s", players[i].name);
        players[i].energy = initEnergy;
    }
}

int main(void)
{
    int n;
    printf("플레이어 수 입력: ");
    scanf("%d", &n);
    getchar();

    Player players[10];
    generatePlayers(players, n, 100);

    int i;
    for (i = 0; i < n; i++)
        printf("이름: %s, 에너지: %d\n", players[i].name, players[i].energy);

    return 0;
}

