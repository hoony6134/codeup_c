#include <stdio.h>
int main(){
    int map[9][9];
    int r,c,i,j,n=0;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%d",&map[i][j]);
        }
    }
    scanf("%d %d",&r,&c);
    r--; c--;
    if(map[r][c]==1) print("-1");
    else{
        if(r>=1&&c>=1&&r<=7&&c<=7){
            n+=map[r-1][c-1];
            n+=map[r-1][c];
            n+=map[r-1][c+1];
            n+=map[r][c-1];
            n+=map[r][c+1];
            n+=map[r+1][c-1];
            n+=map[r+1][c];
            n+=map[r+1][c+1];
        }
        else{
            if(r==0){
                if(c==0){
                    n+=map[r]
                }
            }
        }
    }
}