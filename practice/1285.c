#include <stdio.h>
int main(){
    char ch;
    int i,num,sum;
    scanf("%d",&num);
    sum=num;
    for(i=0;;i++){
        scanf("%c",&ch);
        if(ch=='+'){
            scanf("%d",&num);
            sum+=num;
        }
        else if(ch=='-'){
            scanf("%d",&num);
            sum-=num;
        }
        else if(ch=='*'){
            scanf("%d",&num);
            sum*=num;
        }
        else if(ch=='/'){
            scanf("%d",&num);
            sum/=num;
        }
        else if(ch=='='){
            printf("%d",sum);
            break;
        }
    }
}