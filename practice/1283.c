#include <stdio.h>
int main(){
    float seed,money,temp,sum;
    int i,j,days;
    scanf("%f\n%d",&seed,&days);
    money=seed;
    for(i=0;i<days;i++){
        scanf("%f",&temp);
        money=money+(money*temp*0.01);
    }
    sum=(money-seed>0?money-seed+0.5:money-seed-0.5);
    printf("%d\n",(int)sum);
    if((int)sum>0) printf("good");
    else if ((int)sum==0) printf("same");
    else printf("bad");
}