#include <stdio.h>
#include <string.h> 
#define RANGE 100 

void sortArray(int arr[], int n)
{
    
    int freq[RANGE]; 
    
    memset(freq, 0, sizeof(freq)); 
    
    for (int i = 0; i < n; i++)
        freq[arr[i]]++; 
    
    int k = 0;
    for (int i = 0; i < RANGE; i++)
    {
        while (freq[i]--)
            arr[k++] = i;
    }
} 

int main()
{
     int n;              
     printf("Enter the number of elements : ");
     scanf("%d",&n);     
     int arr[n];             
     printf("Enter the elements : ");
     for(int i=0;i<n;i++)    
     scanf("%d",&arr[i]); 
     sortArray(arr, n);      
    printf("Sorted ..\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
 
    return 0;
}
