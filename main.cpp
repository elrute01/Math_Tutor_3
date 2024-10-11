#include <iostream>
#include <string>

using namespace std;

int main() {
    int leftNum = 2;
    int rightNum = 3;
    int userAns = 0;
    
    string userName;
/* creating a header for the program */
    cout << "*********************************************************" << endl;
    cout << "   __  __       _   _       _____      _   " << endl;        
    cout << "  |  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __" << endl;
    cout << "  | |\\/| |/ _` | __| '_ \\    | || | | | __/ _ \\| '__|" << endl;
    cout << "  | |  | | (_| | |_| | | |     | || |_| | || (_) | |" << endl;
    cout << "  |_|  |_|\\__,_|\\__|_| |_|   |_| \\__,_|\\__\\___/|_|" << endl;
    cout << "*********************************************************" << endl;
    cout << "           Welcome to my silly math tutor!" << endl;
    cout << "*********************************************************" << endl;
    cout << endl;
    
/* making the intro fun with jokes */
    cout << "Fun Math Facts" << endl;
    cout << "     - To the man who invented zero: Thanks for nothing. " << endl;
    cout << "     - For every complex mathematical problem, there is a simple";
    cout << " and elegant solution that is completely wrong." << endl;
    cout << "     - The only way to do math is to use your brain." << endl;
    cout << endl;

/* user will need to enter his/her name */
    cout << "Please enter your name: ";
    cin >> userName;
    cout << endl;
    
/* welcome the user to the tutor */ 
    cout << "Welcome " << userName << "!!" << endl;
    cout << endl;

/* give them a math question to answer */
    cout << "Let's test your skills!" << endl;
    cout << endl;

    cout << userName << ", " << endl;
    cout << "What is " << leftNum << " + " << rightNum << " = ";
    cin >> userAns;
    cout << endl;
    
    cout << "What is " << leftNum << " - " << rightNum << " = ";
    cin >> userAns;
    cout << endl;

    cout << "What is " << rightNum << " * " << leftNum << " = ";
    cin >> userAns;
    cout << endl;

/* create an outro for the tutor web*/
    cout << "Since this was the best tutor ever, feel free to stick around for the free trial!";
    cout << endl;
    cout << endl;

/* make it fun with the end of the program */
    cout << "If you are interested, go to www.mysillymathtutor.com" << endl;
    cout << endl;
    cout << " or call 1-800-(SILMATH) for more information." << endl;
    cout << endl;
    cout << "Thank you for using my program!" << endl;
    
    return 0;
}