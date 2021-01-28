//#include "Semaphore.h"
//
//static Semaphore aArrived(1);
//
//static int count = 0;
//
//void threadA()
//{
//    aArrived.wait();
//
//    count = count + 1;
//    aArrived.notify();
//}
//
//void threadB()
//{
//    aArrived.wait();
//    count = count + 1;
//    aArrived.notify();
//}
//
//int main()
//{
//    auto A = std::thread(threadA);
//    auto B = std::thread(threadB);
//    A.join();
//    B.join();
//    std::cout << count << std::endl;
//    return 0;
//}
