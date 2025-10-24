  #include<stdio.h> 
                         int main(){ 
     int N; 
     printf("Enter size of array : "); 
     scanf("%d",&N); 
     int arra[N],i; 
     printf("Elements of array : "); 
     for(i=0; i<N; i++){ 
     scanf("%d",&arra[i]); 
     } 
      printf("All negative elements are : "); 
     for(i=0; i<N; i++){ 
     if(arra[i]<0){ 
     printf("%d ",arra[i]); 
      } 
     } 
     return 0; 
     }
