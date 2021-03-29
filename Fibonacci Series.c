/*  Title- Wtite a program in c to print fibonacci series
	Name-Harsh Bawaskar
	Roll No.- 136
	Batch- A2
*/


#include<stdio.h>

void main()
{

    int a=0;
    int b=1;
    int f;
    int R;
    int i;
	printf("Fibonacci upto which number:");
    scanf("%d",&f);                              /* INPUT */
    printf("\n 0	1 ");
    for(i=0;i<=f;i++)
     { R=a+b;                              /* Addition Here */
       a=b;									/* Swapping Values */
	   b=R;
	   printf("\t %d",R);	               /* Printing values */
	 }
	 
}

/* OUTPUT
Fibonacci upto which number:10

 0      1        1       2       3       5       8       13      21      34
 55      89      144

*/

