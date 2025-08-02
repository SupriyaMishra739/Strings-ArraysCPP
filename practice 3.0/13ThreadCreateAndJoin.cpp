
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void worker(int id)
{
    cout << "Thread " << id << " started" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Thread " << id << " finished" << endl;
}

int main()
{
    // Create threads
    thread t1(worker, 1);
    thread t2(worker, 2);
    thread t3(worker, 3);

    // Wait for threads to finish
    t1.join();
    t2.join();
    t3.join();

    cout << "All threads completed" << endl;
    return 0;
}