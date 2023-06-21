#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter the Start Date(dd mm yyyy): ");
	scanf("%d %d %d",&d,&m,&y);
	int n;
	printf("Enter number of matches: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d-%d-%d\n",d,m,y);
		if(d==31)
		{
			d=0;
			m=m+1;
	    }
		if(d==30)
		{
			if(m==4||m==6||m==9||m==11)
			{
				d=0;
				m=m+1;
			}
		}
		if(d==28 && m==2)
		{
			d=0;
			m=m+1;
		}
		printf("%d-%d-%d\n",d,m,y);
		d=d+1;
	}
	
}
