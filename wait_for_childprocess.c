#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

//parent 프로세스가 먼저 실행될지 child 프로세스가 먼저 실행될지 모름 
//하지만 parent 프로세스가 먼저 실행될경우, wait(NULL)을 사용해서 parent 프레세스를 블록하고
//child 프로세스가 실행된다. 그 결과 다음과 같이 터미널에 출력된다.

//Daniel Byun
//Alex Byun

int main(int argc,char* argv[]){
    
    //child 프로세스 생성 
    int id=fork();
      
    int n;
    
    //child 프로세스
    if(id==0){
       n=3;   
    }  
    
    //부모 프로세스
    else{
        n=1;
    }
    
    //부모 프로세스 
    if(id!=0){
       wait(NULL);
    }
    
    if(n==1){
       printf("Alex Byun");
    }
    
    if(n==3){
       print("Daniel Byun");
    }
     
    printf("\n");
    return 0;
    
}
