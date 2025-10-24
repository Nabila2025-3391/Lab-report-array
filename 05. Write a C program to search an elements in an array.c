#include<stdio.h> 
int main(){ 
 int N; 
 printf("Enter size of array : "); 
 scanf("%d",&N); 
 int arra[N], i, number, check=0; 
 printf("Enter elements of Array : "); 
 for(i=0;i<N;i++){ 
 scanf("%d",&arra[i]); 
 } 
 printf("Enter number : "); 
 scanf("%d", &number); 
 for(i=0;i<N;i++){ 
 if(arra[i]==number){ 
 check=1; 
 break; 
 } 
 } 
 if(check==1) printf("Found in index %d",i+1); 
 else printf("Not found"); 
 return 0; 
}
