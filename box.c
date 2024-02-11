#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "head/getch.h"

char map[2][100][100] = {
    {
        " Push The Box Game",
        " ##########",
        " ##     ###",
        " ##O###   #",
        " # P O  O #",
        " # XX# O ##",
        " ##XX#   ##",
        " ##########"
    },
    {
        " Push The Box Game",
        " #############",
        " #P          #",
        " #   O O     #",
        " #X    X     #",
        " #############"
    }
};
char initial_map[2][100][100] = {
    {
        " Push The Box Game",
        " ##########",
        " ##     ###",
        " ##O###   #",
        " # P O  O #",
        " # XX# O ##",
        " ##XX#   ##",
        " ##########"
    },
    {
        " Push The Box Game",
        " #############",
        " #P          #",
        " #   O O     #",
        " #X    X     #",
        " #############"
    }
};
int level = 0;
int mapline[]={8,6};

int px[] = {3,2};
int py[] = {4,2};

int px2[] = {3,2};
int py2[] = {4,2};

int ex[2][4] = {{3,4,3,4},{7,2}};
int ey[2][4] = {{5,5,6,6},{4,4}};

int xysum[] = {4,2};

char ch;

int is_win()
{
    for (int i = 0;i < xysum[level]; i++)
    {
        if(map[level][ey[level][i]][ex[level][i]] != 'O')
            return 0;
    }
    return 1;
}

void print_map()
{
    system("clear");
    for (int i = 0;i < mapline[level]; i++)
    {
        puts(map[level][i]);
    }
}
void restart()
{
    for (int i = 0; i < mapline[level]; i++)
    {
        for (int j = 0; j < (int)(strlen(map[level][0])); j++)
        {
            map[level][i][j] = initial_map[level][i][j];
        }
    }
    px[level] = px2[level];
    py[level] = py2[level];
}
void move()
{
    if (ch == 'w' && map[level][py[level] - 1][px[level]] != '#')
    {
        if (map[level][py[level] - 1][px[level]] == 'O')
        {
            if(map[level][py[level] - 2][px[level]] != '#' && map[level][py[level] - 2][px[level]] != 'O')
            {
                map[level][py[level]][px[level]] = ' ';
                py[level]--;
                map[level][py[level]][px[level]] = 'P';

                map[level][py[level] - 1][px[level]] = 'O';
            }
        }
        else
        {
            map[level][py[level]][px[level]] = ' ';
            py[level]--;
            map[level][py[level]][px[level]] = 'P';
        }
    }
    else if (ch == 's' && map[level][py[level] + 1][px[level]] != '#')
    {
        if (map[level][py[level] + 1][px[level]] == 'O')
        {
            if (map[level][py[level] + 2][px[level]] != '#' && map[level][py[level] + 2][px[level]] != 'O')
            {
                map[level][py[level]][px[level]] = ' ';
                py[level]++;
                map[level][py[level]][px[level]] = 'P';

                map[level][py[level] + 1][px[level]] = 'O';
            }
        }
        else
        {
            map[level][py[level]][px[level]] = ' ';
            py[level]++;
            map[level][py[level]][px[level]] = 'P';
        }
    }
    else if (ch == 'a' && map[level][py[level]][px[level] - 1] != '#')
    {
        if (map[level][py[level]][px[level] - 1] == 'O')
        {
            if(map[level][py[level]][px[level] - 2] != '#' && map[level][py[level]][px[level] - 2] != 'O')
            {
                map[level][py[level]][px[level]] = ' ';
                px[level]--;
                map[level][py[level]][px[level]] = 'P';

                map[level][py[level]][px[level] - 1] = 'O';
            }
        }
        else
        {
            map[level][py[level]][px[level]] = ' ';
            px[level]--;
            map[level][py[level]][px[level]] = 'P';
        }
    }
    else if (ch == 'd' && map[level][py[level]][px[level] + 1] != '#')
    {
        if (map[level][py[level]][px[level] + 1] == 'O')
        {
            if (map[level][py[level]][px[level] + 2] != '#' && map[level][py[level]][px[level] + 2] != 'O')
            {
                map[level][py[level]][px[level]] = ' ';
                px[level]++;
                map[level][py[level]][px[level]] = 'P';

                map[level][py[level]][px[level] + 1] = 'O';
            }
        }
        else
        {
            map[level][py[level]][px[level]] = ' ';
            px[level]++;
            map[level][py[level]][px[level]] = 'P';
        }
    }
    else if(ch == 'r')
    {
        restart();
    }
}
int main() 
{
    while(level < 2)
    {
        while(is_win() == 0)
        {
            print_map();

            ch = getch();

            move();

            for (int i = 0; i < xysum[level]; i++)
            {
                if(map[level][ey[level][i]][ex[level][i]] != 'O' && map[level][ey[level][i]][ex[level][i]] != 'P')
                    map[level][ey[level][i]][ex[level][i]] = 'X';
            }
            
        }
        print_map();
        printf("you are win!\n");
        sleep(2);
        level++;
    }
    game_over();
    return 0;
}