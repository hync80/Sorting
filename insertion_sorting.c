#include<stdio.h>
int main(){
    int array[5]={0,1,2,3,4,};
    //input for the array  
    for(int i=0; i<5; i++)
    {
        printf("enter the element at index %d \n", i);
        scanf("%d", &array[i]);        
    }
    //output array after inserting element
    for(int i=0; i<5; i++)
    {
        printf("the elements of array having index %d is %d \n", i, array[i]);
    }
    /*sorting of elements by the method of insertion sorting */
    for(int j = 1;j<5;j++)
    {
        int key = array[j];
        int k = j-1;
        while (k>=0 && array[k]>key)
        {
            array[k+1]=array[k];
            k=k-1;

        }
        array[k+1]= key;
    }
    printf("Given below the array After Sorting \n");
    printf("\n");
     //output array after sorting
    for(int i=0; i<5; i++)
    {
        printf("the elements of array having index %d is %d \n", i, array[i]);
    }
    return 0;
}