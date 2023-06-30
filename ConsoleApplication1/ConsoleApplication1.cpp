// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "song.h"
#include <queue>
using namespace std;

int main() {

    Song back_to_black("Back to Black", "Amy Winehouse");

    Song in_the_end("In The End", "Linkin Park");

    Song papercut("Papercut", "Linkin Park");

    //std::cout<<back_to_black.get_artist()<<"\n";

    queue<Song> q;

    q.push(back_to_black);
    q.push(in_the_end);
    q.push(papercut);

    std::queue<Song> q2 = q;

    while (!q2.empty()) {
        std::cout << q2.front().get_title() << " by " << q2.front().get_artist() << std::endl;
        q2.pop();
    }

    q.pop();

    q2 = q;

    while (!q2.empty()) {
        std::cout << q2.front().get_title() << " by " << q2.front().get_artist() << std::endl;
        q2.pop();
    }
    

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
