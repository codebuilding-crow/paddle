#include<stdio.h>
int main(void)
{
	int n,i,m=2;
	double sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=sum+m;
		m=m+3;
	}
	printf("%.0f",sum);
	return 0;
}
