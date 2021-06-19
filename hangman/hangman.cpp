#include <iostream>
#include <string>
#include <cctype>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;


void letterValidate();
void wordSelection();
void userGuess(); 
bool letterCompare(char guess, string word);
int rndNum();

int rndNum()
{
    int randVal{0};
    std::srand(std::time(0)); 
    randVal = rand() % (10-1)+1;
    return randVal;
}

void wordSelection()
{
    switch (rndNum())
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    case 10:
        break;   
    
    default:
        break;
    }
}

bool letterCompare(char guess, string word)
{
    return (word.find(guess) != string::npos);
}

void userGuess()
{
    cout << "Guess a letter: ";
    char guess;
    cin >> guess;

}