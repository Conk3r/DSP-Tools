#include <stdio.h>
#include <stdlib.h>

int maxElement(int arra[], int laenge){
int max = arra[0];

for (int i = 1; i < laenge; i++)
	if(arra[i] > max)
		max = arra[i];

return max;
}

void buildX(int laenge){
for(int k = 0; k < laenge; k++)
	printf("|  ");

printf("\n");

for (int i = 0; i < laenge; i++)
	printf("%d--", i);

printf("\n\n");
}	
	
	

void dGraph(int array[], int laenge)
{




for (int position = maxElement(array, laenge); position > 0; position--)
	{
	//printf("Die Position ist: %d\n\n", position);	
	for(int i = 0 ; i < laenge ; i++)
		{
		if (array[i] < position)
			printf("   ");
		if (array[i] > position)
			printf("|  ");
		if(array[i] == position)
			printf("o  ");
		}
	printf("\n");
	}

buildX(laenge);

}
