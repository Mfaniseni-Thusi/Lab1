#include "StopWatch.h"
#include <ctime>
#include <iostream>
using namespace std;

// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing
StopWatch::StopWatch(){}

double StopWatch::getProcessTime(){
    string Button = "";
    clock_t Time;
    clock_t intermediateTime;
    clock_t resumeTime;

    cout << "Type START to start the timer" << endl;

    while(cin >> Button){
        if(Button == "START"){
            Time = clock();
            intermediateTime = clock();
            resumeTime = clock();
            break;
        }
        else{
            cout << "\nInvalid! Type START to start the timer " << endl;
        }
    }

    cout << "The timer has started...\n\nType PAUSE to pause, STOP to stop the timer ";



    while(cin >> Button){
        if(Button == "STOP"){
            break;
        }

        else if(Button == "PAUSE"){
            cout << static_cast<double>(clock() - Time)/CLOCKS_PER_SEC << endl;
            intermediateTime = clock() - Time;
        }

        else if(Button == "RESUME"){
            resumeTime = clock();
            cout << static_cast<double>(intermediateTime)/CLOCKS_PER_SEC << endl;

        }

        else{
            cout << "\nInvalid! Type PAUSE to pause, STOP to stop the timer " << endl;
        }
    }

    return static_cast<double>(clock() - resumeTime + intermediateTime)/CLOCKS_PER_SEC;
}
