// 아직 실패
#include <stdio.h>
int main(){
    int map[25][25];
    int newmap[25][25];
    int i,j,cnt=0,tmp;
    for(i=0;i<25;i++){
        for(j=0;j<25;j++){
            scanf("%d",&tmp);
            map[i][j]=tmp;
            newmap[i][j]=tmp;
        }
    }
    for(i=0;i<25;i++){
        for(j=0;j<25;j++){
            cnt=0;
            if(i!=0&&j!=0&&i!=24&&j!=24){ // 테두리 아닌경우
                if(map[i-1][j-1]==1) cnt++;
                if(map[i-1][j]==1) cnt++;
                if(map[i-1][j+1]==1) cnt++;
                if(map[i][j-1]==1) cnt++;
                if(map[i][j+1]==1) cnt++;
                if(map[i+1][j-1]==1) cnt++;
                if(map[i+1][j]==1) cnt++;
                if(map[i+1][j+1]==1) cnt++;
            }
            else{
                
            }
            if(map[i][j]==0&&cnt==3) newmap[i][j]=1;
            if(map[i][j]==1&&(cnt==2||cnt==3)) newmap[i][j]=0;
        }
    }
    printf("\n-\n\n");
    for(i=0;i<25;i++){
        for(j=0;j<25;j++){
            printf("%d ",newmap[i][j]);
        }
        printf("\n");
    }
}