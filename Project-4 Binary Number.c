#include<stdio.h>
main()
{
	int i,n,k;
	printf("Enter the limit: ");
	scanf("%d",&k);
	n=k-1;
	while(n>=0)
	{
	  for(i=0;i<((k-n)*2);i++)
	  {
		if(i%2==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
	  }
	  printf("  ");
	  n=n-1;
    }
	return 0;
}
