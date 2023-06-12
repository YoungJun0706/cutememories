#include <stdio.h>

int main(){
    int i, j, x, y;
    int map[100][100];
    printf("Input W : ");
    scanf("%d", &x);
    printf("Input H : ");
    scanf("%d", &y);

    map[0][0]='+';
    map[x-1][0]='+';
    map[0][y-1]='+';
    map[x-1][y-1]='+';

    for(i=1;i<x-1;i++){
        map[i][0]='-';
        map[i][y-1]='-';
    }
    for(j=1;j<y-1;j++){
        map[0][j]='|';
        map[x-1][j]='|';
    }
    for(j=1;j<y-1;j++){
        for(i=1;i<x-1;i++){
            map[i][j]='@';
        }
    }
    for(j=0;j<y;j++){
        for(i=0;i<x;i++){
            printf("%c",map[i][j]);
        }
        printf("\n");
    }
}

