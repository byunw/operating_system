#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(argc,char* argv[]){
    
    //child process 생성 
    int id=fork();
    
    //parent process
    if(id!=0){
       fork();
    }
    
    
    printf("Hello World\n");
    return 0;
}
     
//출력 결과
  //Hello World
  //Hello World
  //Hello World
