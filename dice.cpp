#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dn() {
    return (rand() % 6)+1;
	}
int main()
{
	for(int i=0;i<10;i++){
    printf("The outcome is:%d\n",dn());}
    return 0;
}
