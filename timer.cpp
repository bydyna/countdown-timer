#include <iostream>
#include <chrono>   // Used to specify time intervals.
#include <thread>   // Used to pause the program during the countdown.
#include <ctime>    // Used to get and display the current date and time.

int main()
{
    int seconds;

    // Get the current time.
    time_t tt;
    time(&tt);

    std::cout << "Enter the countdown time (in seconds): ";
    std::cin >> seconds;

    // LOOP
    for (int i = seconds; i >= 1; i--)
    {
        std::cout << "Time Remaining: " << i << " : " << ctime(&tt);

        // Pause the program for 1 second.
        std::this_thread::sleep_for(std::chrono::seconds(1));

        // Update the current time for the next iteration. 
        time(&tt);
    }

    std::cout << "Time's Up!\n";

    return 0;
}