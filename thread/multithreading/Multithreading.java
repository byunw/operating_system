public class Multithreading{
       public static void main(String[] args) throws InterruptedException{
         
              //Thread 1 생성 
              MultiThreading thread1 = new Multithreading();
              
              //Thread 2 생성(다른 방법으로)
              MyRunnable runnable1 = new MyRunnable();
              Thread thread2 = new Thread(runnable1);

              //Thread 1 끝나고 thread 2 시작 
              thread1.start();
              thread1.join();
              thread2.start();
         
       }
}
              
