#include <stdio.h>
int main(){
    int h,w,n,l,d,x,y,i,j;
    int map[100][100]={0};
    scanf("%d %d",&h,&w);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d %d",&l,&d,&x,&y);
        x--; y--;
        for(j=0;j<l;j++){
            map[x][y]=1;
            if(d==1){
                map[x+j][y]=1;
            }ZŽ
            else{
                map[x][y+j]=1;
            }
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
}