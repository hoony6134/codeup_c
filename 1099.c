#include <stdio.h>
int main(){
    int arr[11][11];
    int i,j,k;
    int x, y, go;
    go=1;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            scanf("%d",&arr[i][j]); // j,i가 점의 x,y좌표를 의미, arr[i][j]가 점의 값
        }
    }
    // 2,2에서 시작, -1씩 해야됨
    x=1; y=1;
    while(go){
        if (arr[y][x]==2){ // 현재 위치(혹은 스폰지점)이 2이면
            arr[y][x]=9; // 현재 위치 찍고
            go=0; // 멈추기
        }
        else if (arr[y][x+1]==0){ // 오른쪽 장애물 없으면 무조건 오른쪽으로 이동
            arr[y][x]=9; // 현재 위치 찍어주기
            arr[y][++x]=9; // 오른쪽으로 한칸 이동 후 찍어주기
        }
        else if(arr[y][x+1]==2){ // 오른쪽에 먹이가 있으면
            arr[y][x]=9;
            arr[y][++x]=9; // 현재 위치랑 이동 위치 찍고
            go=0; // 멈추기
        }
        else if(arr[y+1][x]==2){ // 오른쪽 장애물 있고 아래 먹이가 있으면
            arr[y][x]=9;
            arr[++y][x]=9; // 현재랑 아래 위치 찍어주고
            go=0; // 멈추기
        }
        else if(arr[y+1][x]==1){ // 위 코드에 의해 arr[x+1][y]=1인 경우만 남음: 오른쪽에 장애물이 있고, 아래쪽에도 장애물이 있으면
            arr[y][x]=9; // 현재 위치 찍기
            go=0;
        }
        else{ // 오른쪽에 장애물 있을 때
            arr[y][x]=9; // 현재, 아래쪽으로 이동한 위치 찍기
            arr[++y][x]=9;
        }
    }
    for(i=0;i<=9;i++){
        for(j=0;j<=9;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
