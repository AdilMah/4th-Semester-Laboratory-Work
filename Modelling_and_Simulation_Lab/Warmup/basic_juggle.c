#include<stdio.h>

int main()
{	
	int balls,i,t=10,j,temp,hands,m;
	
	printf("Enter the no. of hands:: ");
	scanf("%d",&hands);

	printf("\nEnter the no. of balls:: ");
	scanf("%d",&balls);
	
	if(balls>hands)
		m=balls;
	else
		m=hands;
		
	int a[m];
	
	for(i=0;i<balls;i++)
		a[i]=i+1;
	for(j=i;j<hands;j++)
		a[j]=0;
		
	printf("| | dnotes the two hands and the number denotes the ball\n");
	
	for(i=0;i<hands;i++)
		printf("|%d|\t",a[i]);
	printf("\n");
	
	while(t--)
	{
		temp=a[0];
	
		for(j=0;j<m-1;j++)
		{
			a[j]=a[j+1];
		}
		a[m-1]=temp;
	
	for(i=0;i<hands;i++)
		printf("|%d|\t",a[i]);
	printf("\n");
	}
	
	return 0;
}
