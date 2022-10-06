#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
int main(){
	FILE * fp = NULL;
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int process = fork();
	char arr[128];
	if(process == 0)
	{
	fp = fopen("numbers.txt", "r");
	while (fgets(arr, 128, fp) !=NULL)
	{
	x= atoi(arr);
	if(x % 2 == 0){
	i = i+1;
	}
	}
		fclose(fp);
	printf("%d \n" ,i);
	}
	if( process >0){
	wait(NULL);
        fp = fopen("numbers.txt", "r");
	while (fgets(arr, 128, fp) !=NULL)
	{
	y= atoi(arr);
	if(y % 3 == 0){
	j = j+1;
	}
	}
	fclose(fp);
	printf("%d \n" ,j);
	}
	return 0;
}
