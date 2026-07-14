# Countdown Timer (C++)
The Countdown Timer is a simple C++ console application that counts down from a user-specified number of seconds to zero. During each second of the countdown, the program displays the remaining time along with the current date and time. Once the countdown finishes, it displays a "Time's Up!" message.

# Technologies Used
- C++
- Visual Studio Code
- C++ Standard Library (iostream)
- C++ Standard Library (chrono)
- C++ Standard Library (thread)
- C++ Standard Library (ctime)

# Concepts Used
- For Loop – Used a for loop to count down from the entered number of seconds to 1.
- User Input and Output – Used cin to receive the countdown duration and cout to display the remaining time.
- Time Functions – Used time() and ctime() to retrieve and display the current date and time.
- Threading – Used std::this_thread::sleep_for() to pause the program for one second between each countdown.
- Chrono Library – Used std::chrono::seconds to specify the one-second delay.
- Variables – Used variables to store the countdown duration and current system time.

# The Process
- Ask the user to enter the countdown time in seconds.
- Retrieve the current system time.
- Start counting down from the entered number of seconds.
- Display the remaining time together with the current date and time.
- Pause the program for one second after each countdown step.
- Update the current system time for the next iteration.
- Continue until the countdown reaches zero.
- Display "Time's Up!" when the countdown is complete.

# What I Learned
- How to use for loops for countdown operations.
- How to pause program execution using std::this_thread::sleep_for().
- How to work with the chrono library to represent time intervals.
- How to retrieve and display the current date and time using time() and ctime().
- How to create a simple real-time console application.

# How It Could Be Improved
- Display the countdown in HH:MM format.
- Clear the console each second for a cleaner countdown display.
- Validate user input to prevent negative values.
- Add a sound or notification when the timer finishes.
- Allow users to pause, resume, or reset the timer.
- Support multiple countdown timers running simultaneously.

# How to Run the Project
- Step 1: Open the project in Visual Studio Code or any C++ IDE.
- Step 2: Compile the program using a C++ compiler.
- Step 3: Run the program.
- Step 4: Enter the countdown time in seconds.
- Step 5: Watch the countdown as it updates every second.
- Step 6: Wait for the "Time's Up!" message when the countdown ends.

# Sample Output 
![image alt](https://github.com/bydyna/countdown-timer/blob/add536425d089d8f43bc0700f0a9d3ac2e20bc1c/Screenshot%202026-07-14%20235624.png)
