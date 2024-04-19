#include<stdio.h>
int main(){
      int sumOfPos=0;
      int sumOfNeg=0;
      int lenOfArray;
      scanf("%d",&lenOfArray);
      int arr[lenOfArray];
      for(int i=0; i<lenOfArray; i++){
        scanf("%d",&arr[i]);
      }
      for(int i=0; i<lenOfArray;i++){
       if(arr[i]>=0){
        sumOfPos+=arr[i];
       }else{
        sumOfNeg+=arr[i];
       }
      }
      printf("%d %d",sumOfPos,sumOfNeg);
    return 0;
}