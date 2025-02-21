
#include <stdio.h>
int main()
{
int j=0;
for(++j;++j;j++)
{
printf("%d ", j);
if(j==4)
break;
}
}
