#include <stdio.h>
int gcd(int a,int b)
{
  if(a%b==0)
  return b;
  else
  return gcd(b,a%b);
}
int main()
{
	//code
	int t=0;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a>=b)
	    printf("%d\n",gcd(a,b));
	    else
	    printf("%d\n",gcd(b,a));
	}
	return 0;
}
