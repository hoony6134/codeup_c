#include <stdio.h>
int main(){
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		if(i==0){ // 첫번째, 마지막 줄에서 꽉채워서 출력 
			for(j=0;j<n;j++){
				printf("*");
			}
			printf("\n");
		}
		else if(i==n-1){
			for(j=0;j<n;j++){
				printf("*");
			}
		}
		else{
			for(j=1;j<=n;j++){
				if(j==1||j==n){ // 첫번째, 마지막 칸에서 별 출력 
					printf("*");
				}
				else{
					if(i%k==0&&j%k==0){ // ak에서 k-i%k가 k가 되는 경우 실행 불가해서 별도 
						printf("*");
					}
					else if(j%k==k-i%k){ // 나머지 경우 k-i%k가 j%k가 되면 ak+i%k 꼴  
						printf("*");
					}
					else{
						printf(" "); // 나머지  
					}
				}
			}
			printf("\n");
		}
	}
}
