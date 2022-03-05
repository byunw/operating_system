#include <unistd.h>
#include <stdio.h>

int main(void){
    
    //child process 생성
    fork();
    
    //Fork testing code 2번 출력
    printf("Fork testing code\n");
    return 0;
    
 }
     
