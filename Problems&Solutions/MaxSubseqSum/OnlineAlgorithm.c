#include<stdio.h>
int immediaSolve(int*,int);
int main(void)
{
	int K;
	scanf("%d",&K);
	int N[K];
	for(int i=0;i<K;i++){
		scanf("%d",&N[i]);
	}
	
	printf("%d",immediaSolve(N,K));
	
	return 0;
 }
 
 int immediaSolve(int* List,int K){
 	int sum=0,i,maxSum;
 	maxSum=sum;
 	for(i=0;i<K;i++){
 		sum+=List[i];
 		if(sum>maxSum) maxSum=sum;
 		if(sum<0) sum=0;
	 }
	 
	 return maxSum;
 } 
