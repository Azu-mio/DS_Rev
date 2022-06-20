#include <stdio.h>
#define MaxSize 10

typedef struct{
    int data[MaxSize]={1,2,3,4,5,6,7,8,9,10};
    int length=0;
}SqList;

// void InitList(SqList L)
// {
//    for(int i=0;i<10;i++){
//     L.data[i]=0;
//    }
//    L.length=0;
// }

int main(){
    SqList L;
    // int a[10] = {1,2,3};
    // for(int i=0;i<10;i++){
    //     printf("%d",a[i]);
    // }
    // L.data={1,2,3};
    // for(int i=0;i<10;i++){
    //     printf("%d",L.date[i]);
    // }
    // InitList(L);
    printf("%d",L.length);
    return 0;
}