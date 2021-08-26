#include<stdio.h>
int step = 0;
void toh( int ndisk, char source, char temp, char dest )
{
   	 
    if ( ndisk > 0 )
    {
           	 
   	 toh ( ndisk-1, source, dest, temp );
            	step = step + 1;
   	 printf ( "Step no %d Move Disk %d  %c-->%c\n",step, ndisk, source,dest );
   	 toh( ndisk-1, temp, source, dest );
    }
}

int main()
{
    char  source= 'S',temp= 'T', dest= 'D';
    int ndisk;
    
    printf("Enter the number of disks : ");
    scanf ( "%d", &ndisk );
    
    printf ("Sequence is :\n");
    toh( ndisk, source, temp, dest );
    
    return 0;
}
