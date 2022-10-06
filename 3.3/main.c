#include<stdio.h>
#include "factorial.h"
#include "readline.h"
#include <string.h>
int main()
{
int x = 0;
char k[50];
gets(k);
int l = read_line(k);
if(l == 1){
x = atoi(k);
l = factorial(x);
printf("%d",l);
}

if(l == 0){
printf("-1");
}
return 0;
}
