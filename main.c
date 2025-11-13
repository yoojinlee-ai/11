#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int energy;
    int position;
} Player;

void generatePlayers(Player players[], int n, int initEnergy)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("플레이어 %d 이름 입력: ", i + 1);
        scanf("%s", players[i].name);
        players[i].energy = initEnergy;
        players[i].position = 0;
    }
}

void printGrades(Player p)
{
    printf("이름: %s, 에너지: %d, 위치: %d\n", p.name, p.energy, p.position);
}

void goForward(Player *p, int step)
{
    p->position += step;
    p->energy -= step * 10;
    if (p->energy < 0) p->energy = 0;
}

int main(void)
{
    int n, i;
    printf("플레이어 수 입력: ");
    scanf("%d", &n);
    getchar();

    Player players[10];
    generatePlayers(players, n, 100);

    for (i = 0; i < n; i++) {
        goForward(&players[i], 2);
        printGrades(players[i]);
    }

    return 0;
}

