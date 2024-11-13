#include<stdio.h>
int main(){
    FILE *file=fopen("example.txt","r");
    if(file==NULL){
        perror("error creating file\n");
        return 1;
    }
    printf("file created successfully.\n");
    fclose(file);
    return 0;
}