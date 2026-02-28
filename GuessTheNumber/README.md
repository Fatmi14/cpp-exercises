# 🎮 Guess the Number Game

A simple console-based number guessing game where the computer picks a random number and the player tries to guess it with hints.

## 📝 Description

The program generates a random number between 1 and 100. The player enters guesses, and the program responds with "Greater!" if the guess is too low, or "Less!" if the guess is too high. The game continues until the player guesses correctly, then asks if they want to play again.

## ✨ Features

- ✅ Random number generation (1-100)
- ✅ Input validation (prevents empty or non-numeric input)
- ✅ Guess counter (shows number of attempts)
- ✅ Hint system (Greater/Less)
- ✅ Play again option
- ✅ Secure input handling (no buffer overflow)

## 🛡️ Security Features

- Uses `cin.getline()` instead of `cin >>` to prevent buffer overflow
- Validates that input contains only digits
- Checks for empty input
- Limits input size to prevent memory issues
- Proper null-termination of strings

## 🖥️ How to Compile and Run

### Compile:
```bash
g++ guess.cpp -o guess