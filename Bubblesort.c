#include <stdio.h> 
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)          
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
int main() 
{ 
    int arr[20];
    int l,i;
	printf("\nEnter number of elements:");
	scanf("%d",&l);
	printf("\nEnter elements in the array:");
	for(i=0;i<l;i++)
	{
		scanf("%d",&arr[i]);
	} 
    bubbleSort(arr, l); 
    printf("Sorted array: \n"); 
    printArray(arr, l); 
    return 0; 
} 
