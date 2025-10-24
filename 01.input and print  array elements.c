#include<stdio.h> 
                 int main(){ 
     int N; 
     printf("Enter size of Array : "); 
     scanf("%d",&N); 
     int arra[N],i; 
     printf("Elements of array: "); 
     for(i=0;i<N;i++){ 
     scanf("%d",&arra[i]); 
     } 
     printf("Array is : "); 
     for(i=0;i<N; i++){ 
     printf("%d ",arra[i]); 
     } 
 return 0; 
  }
