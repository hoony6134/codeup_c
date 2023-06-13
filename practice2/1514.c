#include <stdio.h>
int main(){
    int map[7][7];
    int a,b,c,d,e,f;
    scanf("%d %d\n%d %d\n%d %d", &a, &b, &c, &d, &e, &f);
    a--; b--; c--; d--; e--; f--;
    int i,j;
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            map[i][j]=0;
        }
    }
    map[a][b]=2;
    map[c][d]=2;
    map[e][f]=2;
    for(i=0;i<7;i++){
        if(map[3][i]==2){
            for(j=0;j<7;j++){
                map[i][j]=1;
            }
        }
        else map[3][i]=1;
    }
    map[a][b]=2;
    map[c][d]=2;
    map[e][f]=2;
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
}