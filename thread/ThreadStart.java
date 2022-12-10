public class ThreadStart{
       
       public static void main(String[] args){
              
              //쓰레드 생성 
              MyThread mythread = new MyThread();
            
              //생성된 객체 클래스 run() 실행 
              mythread.start();
       }
  
}
