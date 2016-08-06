#include<stdio.h>
#include<math.h>
int main()
{
	double input;int tmp;int final;
	int i;int flag=0;int a[100];
	scanf("%lf",&input);

	for(i=0;i<100;i++)
	{
		tmp=(int)pow(2,i);
		//printf("%d\n",tmp);
		if(tmp>0)
		{
				if((int)input%tmp==0)
					{
						//if((int)input%tmp != 0 && tmp>i)
						tmp=log(tmp) / log(2);
						final=tmp;
					}
		}

	}

		printf("%d",final);


	return 0;
}
