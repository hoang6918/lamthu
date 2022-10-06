#include "readline.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int read_line (char *str){
int i;
for(i = 0; i< strlen(str); i++){
if(str[i]< 48 || str[i] > 57){
return 0;
}
}
return 1; 
}
