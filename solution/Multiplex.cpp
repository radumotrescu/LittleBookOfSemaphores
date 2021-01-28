//#include <vector>
//#include "Semaphore.h"
//
//static Semaphore aArrived(10);
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
//int main()
//{
//    auto threadVector = std::vector<std::thread>();
//    for (auto i = 0; i < 100; i++)
//    {
//        threadVector.push_back(std::thread(threadA));
//    }
//
//    for (auto& thread: threadVector)
//    {
//        thread.join();
//    }
//    std::cout << count << std::endl;
//    return 0;
//}
