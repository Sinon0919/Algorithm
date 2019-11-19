//иол╗╫в
#include <stdio.h>
int NUM=39;
int f(int x,int y)
{
	if(x>39)
	    return 0;
	if(x==39)
	    return y % 2 ==0 ? 1:0 ;
	    
		return f(x+1,y+1)+f(x+2,y+1);	    
} 

int main()
{
	int n;
	n=f(0,0);
	printf("%d",n);
	return 0;
}
