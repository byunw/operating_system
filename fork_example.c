#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Before Forking\n");
    fork();
    printf("After Forking\n");
}

//출력결과
//Before Forking
//After Forking
//After Forking 
