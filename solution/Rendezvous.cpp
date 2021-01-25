#include <iostream>
#include <thread>

#include "Semaphore.h"

//Semaphore aArrived(0), bArrived(0);
//
//void threadA()
//{
//    std::cout << "statement a1\n"; 
//    aArrived.notify();
//    bArrived.wait();
//    std::cout << "statement a2\n"; 
//}
//
//void threadB()
//{
//    std::cout << "statement b1\n"; 
//    bArrived.notify();
//    aArrived.wait();
//    std::cout << "statement b2\n"; 
//}

//int main()
//{
//    auto A = std::thread(threadA);
//    auto B = std::thread(threadB);
//    A.join();
//    B.join();
//    return 0;
//}