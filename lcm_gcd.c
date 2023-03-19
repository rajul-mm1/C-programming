# include<stdio.h>
int main(){
int n1, n2 , max, gcd;
 printf("enter the nos n1 and n2:");
 scanf("%d %d",&n1 , &n2);
 max = (n1 > n2)? n1 : n2;
 while(1){

  if(max % n1 == 0 && max % n2 == 0){
 printf("the lcm of %d and %d is %d\n",n1 , n2 , max);
 break;
  }
  ++max;
}
for(int i=1; i<=n1 && i <=n2; i++){
 if(n1 % i==0 && n2 % i == 0)
 gcd = i;
 }
 printf("the hcf of %d and %d is %d", n1,n2,gcd);
 return 0;
}