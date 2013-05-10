#include<stdlib.h>
#include<stdio.h>

int circConvolution(int v1[], int v2[], length)
	{
	
	/* Data field */
	
	
	int s=0	; 	// saves value for each convolution part
	int m	;   // used for the modulo operation in the second array
	int P[length];	// the result is stored in this array
	
	/*Compute the Convolution*/
	for(int k = 0; k < length; k++)
		{
		
		for(int i = 0; i < length; i++)
			{
			m= (k-i)	;
		
			m=  m%N		;
			if(m < 0)			// mod operator in C does not work as it shoukld with neg. numbers
			 m += N;
			 
			s = s + v1[i] *v2[m];
			
			}
			
		P[k] = s;				
		s = 0	;  
		printf("P[%d] = %d \n" , k, P[k]);
		}
	
	return 0;
	} 
