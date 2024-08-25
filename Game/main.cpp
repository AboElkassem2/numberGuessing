#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int max, guess, randomNumber;
    cout << " enter your scope\n";
    cin >> max;
    randomNumber = (rand() % max) + 1;
    srand((unsigned int)time(NULL));
    cout << "guess the random number between 1 and your scope" << endl;
    int attemps = 0;

    while (guess != randomNumber)
    {
        cin >> guess;
        if (guess > randomNumber)
        {
            cout << "TOO HIGH" << endl;
            attemps++;
        }
        else if (guess < randomNumber)
        {
            cout << "TOO LOW" << endl;
            attemps++;
        }
        else
        {
            cout << "YOU GUESSED RIGHT 150 IQ" << endl;
            cout << "Number of attemps is: " << attemps;
        }
    }

    return 0;
}