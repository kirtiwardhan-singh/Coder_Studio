#include<stdio.h>
int sqrt(int n){
  int ans;
  // for(int i=1;i<n;i++){
  //   if(i*i<=n)
  //   ans=i;
  //   else
  //   break;
  // }
  int f=1,l=n,m;
  int arr[n],j=0;
  for(int i =0;i<n;i++){
    arr[i]=j;
    j++;
  }
  while(f<=l){
    m=(f+l)/2;
    if(m*m<=n)
    ans=m;
    else if(m*m<n){
      l=m-1;
    }
    else
    f=m+1;
  }
  return ans;
}

void main(){
  int n;
  scanf("%d",&n);
  int t = sqrt(n);
  printf("%d",t);
}