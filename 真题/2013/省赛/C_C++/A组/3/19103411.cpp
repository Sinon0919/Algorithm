//ÕñĞËÖĞ»ª
#include <stdio.h>
int f(int x,int y)
{
	if (x == 3 || y == 4) return 1;
        return f(x + 1, y) + f(x, y + 1); 	
} 

int main()
{
	int n;
	n=f(0,0);
	printf("%d",n);
	return 0;
}
