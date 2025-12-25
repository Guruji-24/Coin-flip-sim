#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum coin {head,tail} coin;

coin flipcoin();

int main()
{
	srand(time(NULL));
	for (int i =0;i<10;i++)
	if (flipcoin()== head) printf("HEADS\n");
	else printf("TAILS\n");
}
coin flipcoin()
{
	if (rand()%2 == 0) return head;
	else return tail;
}
