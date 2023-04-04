#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    float plus,minus,multiply,divide,power;
    scanf("%d %d",&a,&b);
    plus=a+b;
    if(a>b){
        minus=a-b;
    }
    else{
        minus=b-a;
    }
    if(a>b){
        divide=(float)a/(float)b;
    }
    else{
        divide=(float)b/(float)a;
    }
    multiply=a*b;
    if(pow(a,b)>pow(b,a)){
        power=pow(a,b);
    }
    else{
        power=pow(b,a);
    }
    if (plus>=minus&&plus>=multiply&&plus>=divide&&plus>=power){
        printf("%f",plus);
    }
    else if (minus>=plus&&minus>=multiply&&minus>=divide&&minus>=power){
        printf("%f",minus);
    }
    else if (multiply>=plus&&multiply>=minus&&multiply>=divide&&multiply>=power){
        printf("%f",multiply);
    }
    else if (divide>=plus&&divide>=minus&&divide>=multiply&&divide>=power){
        printf("%f",divide);
    }
    else{
        printf("%f",power);
    }
}