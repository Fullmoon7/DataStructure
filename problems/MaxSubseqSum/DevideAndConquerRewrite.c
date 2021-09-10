#include<stdio.h>
int DevideAndConquer(int*,int,int);
int Max3(int,int,int);
int main(void)
{
	int K;
	scanf("%d",&K);
	int N[K];
	int i;
	for(i=0;i<K;i++){
		scanf("%d",&N[i]);
	}
	printf("%d",DevideAndConquer(N,0,K-1));
	
	return 0;
}
//left      mid|        right
int DevideAndConquer(int* List,int left,int right)//递归算法 
{
	if(left==right){//递归终点 
		return List[left];
	}
	else{
		int mid=(left+right)/2;
		int MaxLeftSubseq,MaxRightSubseq;
		MaxLeftSubseq=DevideAndConquer(List,left,mid);//左侧子列最大和 
		MaxRightSubseq=DevideAndConquer(List,mid+1,right);//右侧子列最大和
		
		int MaxMidSubseq,MidleftSum=0,MidrightSum=0;
		int MaxMidleftSum=MidleftSum,MaxMidrightSum=MidrightSum;
		for(int i=mid;i>=left;i--){
			MidleftSum+=List[i];
			if(MidleftSum>MaxMidleftSum) MaxMidleftSum=MidleftSum;
		}
		for(int i=mid+1;i<=right;i++){
			MidrightSum+=List[i];
			if(MidrightSum>MaxMidrightSum) MaxMidrightSum=MidrightSum;
		}
		MaxMidSubseq=MaxMidleftSum+MaxMidrightSum;
		return Max3(MaxLeftSubseq,MaxRightSubseq,MaxMidSubseq);
	}
}

int Max3(int A,int B,int C){
	return A > B ? A > C ? A : C : B > C ? B : C; 
}
