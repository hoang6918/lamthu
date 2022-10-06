#include <stdio.h>
#include "factorial.h"
int factorial (const int aNumber)
{
int i;
long long fact = 1;
if(aNumber<0)
{
printf("So nhap vao be hon 0");
return 0;
}
else{
for(i =1 ; i<=aNumber; i++)
{
fact = fact * i;
}
}
return fact;
}
