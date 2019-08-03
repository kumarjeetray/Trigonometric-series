#include<stdio.h>
#include<math.h>
void main()
{
	int n,n1;
	int c=1;
	float sum=0.0;
	int cal=1;
	printf("Enter a number til which the series neds to run: ");
	scanf("%d",&n);
	printf("\n Enter a number: ");
	scanf("%d",&n1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cal=cal*j;
		}
		if(i%2==0)
		{
			sum-=(pow(n1,c))/cal;
		}
		else if(c==1)
		{
			sum+=n1;
		}
		else	
		{
			sum+=(pow(n1,c))/cal;
		}
		c+=2;
		cal=1;
	}
		
	printf("\n Sum=%f",sum);
} 
	
