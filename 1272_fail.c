#include <stdio.h>
int main()
{
    int k, h, donate;
    donate = 0;
    scanf("%d %d", &k, &h);
    if (k==3){
        k=2;
    }
    else if(k==2){
        k=10;
    }
    else if (k % 2 == 0)
    {
        k = k / 2 + 1;
        k*=10;
    }
    else{
        k = k / 2 + 1;
    }
    if (h==3){
        h=2;
    }
    else if (h==2){
        h=10;
    }
    else if (h % 2 == 0)
    {
        h = h / 2 + 1;
        h*=10;
    }
    else{
        h = h / 2 + 1;
    }
    // printf("%d %d",k,h);
    printf("%d",k+h);
}