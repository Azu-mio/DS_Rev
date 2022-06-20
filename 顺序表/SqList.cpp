#include <stdio.h>
#define MaxSize 10

typedef struct{
    // int data[MaxSize];
    int data[MaxSize]={1,2,3,4,5,6,7,8,9,10};
    // int length;
    int length = 10;
}SqList;


void InitList(SqList &L)
{
   for(int i=0;i<10;i++){
    L.data[i]=0;
   }
   L.length=0;
}

void ListInsert(SqList &L,int i,int e){
    for(int j=L.length;j>=i;j--){
       L.data[j]=L.data[j-1]; 
    }
    L.data[i-1]=e;
    L.length++;
}

int main(){
    SqList L;
    // InitList(L);
    for(int i=0;i<L.length;i++){printf("%d ",L.data[i]);} printf("\n");
    ListInsert(L,3,100);
    for(int i=0;i<L.length;i++){printf("%d ",L.data[i]);} printf("\n");
 
}



// {
//     常用代码
//      for(int i=0;i<L.length;i++){printf("%d ",L.data[i]);} printf("\n");
// }
// {
       
       // int a[10] = {1,2,3};
    // for(int i=0;i<10;i++){
    //     printf("%d",a[i]);
    // }
    // L.data={1,2,3};
    
    // L.data[0,1,2]={1,2,3};
  
//     printf("L");
//     for(int i=0;i<10;i++){
//         printf("%d ",L.data[i]);
//     }
//     InitList(L);

//     printf("L0length%d ",L.length);

//     printf("L");
//     for(int i=0;i<10;i++){
//         printf("%d ",L.data[i]);
//     }
//     printf("Llength%d ",L.length);
//     return 0;
//  }