#include <stdio.h>
int main()
{

for(;;) //no condition, no increment-decrement
{
printf(" ");
}


int i=1;
while(i<=10);  //Due to this semicolon, the internal body of the while loop will not execute.
{
printf("%d", i);   // warning: while loop has empty body [-Wempty-body] 
i++;
}

char ch='n';
while(ch ='y')   // warning: using the result of an assignment as a condition without parentheses [-Wparentheses]  
{
printf("hello");
}

for(int ii=1;ii<=1;ii++) //(i>=1) will always be true 
{
printf("hello");
}

return 0;
}

