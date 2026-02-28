#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cctype>
using namespace std;

int main() {
    // تهيئة الرقم العشوائي (مرة واحدة)
    srand(time(0));
    
    char playAgain[5] = {'Y'};
    
    do {
        int secret = rand() % 100 + 1;  // رقم سري بين 1-100
        int attempts = 0;
        int guess;
        char input[10];
        
        cout << "\n=========================================" << endl;
        cout << "        🎮 GUESS THE NUMBER" << endl;
        cout << "=========================================" << endl;
        cout << "I'm thinking of a number between 1 and 100." << endl;
        cout << "Can you guess it?" << endl;
        
        do {
            attempts++;
            bool validInput = true;
            
            cout << "\nAttempt " << attempts << ": ";
            cin.getline(input, 10);
            
            // التحقق من الإدخال الفارغ
            if(strlen(input) == 0) {
                cout << "❌ You didn't enter anything!" << endl;
                attempts--;
                continue;
            }
            
            // التحقق من أن الإدخال أرقام فقط
            for(int i = 0; i < strlen(input); i++) {
                if(!isdigit(input[i])) {
                    cout << "❌ Please enter a valid number!" << endl;
                    validInput = false;
                    attempts--;
                    break;
                }
            }
            
            if(!validInput) continue;
            
            guess = atoi(input);
            
            if(guess < secret) {
                cout << "📈 Greater!" << endl;
            } else if(guess > secret) {
                cout << "📉 Less!" << endl;
            } else {
                cout << "\n🎉 CORRECT! You got it in " << attempts << " attempts!" << endl;
            }
            
        } while(guess != secret);
        
        // سؤال إعادة اللعب
        cout << "\nDo you want to play again? (Y/n): ";
        cin.getline(playAgain, 5);
        
    } while(strcmp(playAgain, "Y") == 0 || strcmp(playAgain, "y") == 0);
    
    cout << "\n👋 Thanks for playing! Goodbye." << endl;
    
    return 0;
}