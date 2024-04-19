#include<stdio.h>
int main(){
      int lenOfArray;
      scanf("%d",&lenOfArray);
      int arr[lenOfArray];
      for(int i=0; i<lenOfArray; i++){
        scanf("%d",&arr[i]);
      }
      int index, indexValue;
      scanf("%d %d",&index,&indexValue);
      arr[index]=indexValue;
      for(int i=lenOfArray-1; i>=0;i--){
        printf("%d ",arr[i]);
      }
    return 0;
}