#include <stdio.h>
int main(){
    double h,w,std,bmi;
    scanf("%lf %lf",&h,&w);
    if(h<150){
        std=h-100;
    }
    else if(h<160){
        std=(h-150)/2 + 50;
    }
    else{
        std=(h-100)*0.9;
    }
    bmi=(w-std)*100/std;
    if(bmi<=10){
        printf("정상");
    }
    else if(bmi<=20){
        printf("과체중");
    }
    else{
        printf("비만");
    }
}