#include <stdio.h>
#define MaxSize 10

typedef struct{
    // int data[MaxSize];
    int data[MaxSize]={1,2,3,4,5,6};
    int length;
}SqList;


void InitList(SqList &L)
{
   for(int i=0;i<10;i++){
    L.data[i]=0;
   }
   L.length=0;
}

int main(){
    SqList L;
    // int a[10] = {1,2,3};
    // for(int i=0;i<10;i++){
    //     printf("%d",a[i]);
    // }
    // L.data={1,2,3};
    
    // L.data[0,1,2]={1,2,3};
  
    printf("L");
    for(int i=0;i<10;i++){
        printf("%d ",L.data[i]);
    }
    InitList(L);

    printf("L0length%d ",L.length);

    printf("L");
    for(int i=0;i<10;i++){
        printf("%d ",L.data[i]);
    }
    printf("Llength%d ",L.length);
    return 0;
}