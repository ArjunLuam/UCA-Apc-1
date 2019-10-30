#include <stdio.h>
#include <math.h>
int main()
{
    int i,T,p,count=0;
	int arr[12];
	for(i=0;i<12;i++)arr[i]=pow(2,i);
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&p);
	    for(i=11;i>=0;i--)
	    {
	        count+=(p/arr[i]);
	        p-=((p/arr[i])*arr[i]);
	        if(p==0)
	            break;
	    }
	    printf("%d\n",count);
	    count=0;
	}
	return 0;
}


