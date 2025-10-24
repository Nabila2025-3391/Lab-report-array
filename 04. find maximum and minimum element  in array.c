  #include<stdio.h> 
                     int main(){ 
 int N; 
 printf("Enter size of array : "); 
 scanf("%d",&N); 
 int arra[N],i,sum=0; 
 printf("Elements of array : "); 
 for(i=0;i<N;i++){ 
 scanf("%d",&arra[i]); 
 } 
 int maxi=arra[0],mini=arra[0]; 
 for(i=0;i<N;i++){ 
 if(arra[i]>maxi){ 
 maxi=arra[i]; 
 } 
 else if(arra[i]<mini){ 
 mini=arra[i]; 
 } 
 } 
 printf(" Maximum element is : %d",maxi); 
 printf("\n\nMinimum element is : %d",mini); 
 return 0; 
}
