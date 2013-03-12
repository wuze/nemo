#include <stdio.h>
#include <stdlib.h>

#define   COLS    9
#define	  ROWS	  9



int data[ROWS][COLS];

void InitData()
{
	int i=0,j=0;
	for(i=0;i<ROWS;i++)
		for (j=0;j<COLS;j++)
			data[i][j] = j+1;

}


void display()
{
	int i=0,j=0;
	for(i=0;i<ROWS;i++){
		for (j=0;j<COLS;j++)
		printf("%3d",data[i][j]);
		printf("\n");
	}
}


void InitMap()
{


}

int main()
{

	srand((unsigned)time(NULL));

	InitData();
	display();

	return 0;
}