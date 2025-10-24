#include<stdio.h> 
int main(){ 
     int N; 
     printf("Enter size of array : "); 
     scanf("%d",&N); 
     int arra[N],i,sum=0; 
     printf("Elements of array  : "); 
     for(i=0;i<N;i++){ 
     scanf("%d",&arra[i]); 
     } 
     for(i=0;i<N;i++){ 
     sum += arra[i]; 
     } 
     printf("Sum of all elements is : "); 
     printf("%d",sum); 
 return 0; 
}
