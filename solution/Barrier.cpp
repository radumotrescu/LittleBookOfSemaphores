#include <vector>
#include "Semaphore.h"

static Semaphore mutex(1);
static Semaphore turnstile1(0);
static Semaphore turnstile2(1);

static int count = 0;
static int n = 100;
void countThread()
{
    mutex.wait();
    count++;

    if (count == n)
    {
        turnstile2.wait();
        turnstile1.notify();
    }
    mutex.notify();

    turnstile1.wait();
    turnstile1.notify();
    std::cout << "you shall pass" << std::endl;

    mutex.wait();
    count--;

    if (count == 0)
    {
        turnstile1.wait();
        turnstile2.notify();
    }
    mutex.notify();

    turnstile2.wait();
    turnstile2.notify();
}

int main()
{
    auto threadVector = std::vector<std::thread>();
    for (auto k = 0; k < 2; k++)
    {
        for (auto i = 0; i < n; i++)
        {
            threadVector.push_back(std::thread(countThread));
        }

    }
    for (auto& thread : threadVector)
    {
        thread.join();
    }
    //std::cout << count << std::endl;
    return 0;
}
