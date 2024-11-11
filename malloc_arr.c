#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int *array=(int*)malloc(n*sizeof(int));
    if(array==NULL){
        printf("memory allocatiomn failed\n");
        return 1;
    }
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("you entered:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",array[i]);

    }
    printf("\n");
    free(array);
    return 0;
}
