//最大子列和暴力求法
 
#include<stdio.h>

int main()
{
	int K;
	scanf("%d",&K);
	int N[K];
	int i,j,k;
	for(i=0;i<K;i++){
		scanf("%d",&N[i]);
	}
	
	int sum,maxSum;
	sum=0;
	maxSum=sum;
	for(i=0;i<K;i++){
		for(j=i;j<K;j++){
			sum+=N[j];
			if(sum>maxSum){
				maxSum=sum;
			}
		}
		sum=0;
	}
	
	printf("%d", maxSum);
	return 0;
}
