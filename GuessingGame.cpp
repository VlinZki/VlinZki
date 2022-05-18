#include <iostream>
#include <time.h>
#include <string>
using namespace std;

int option,mode,attemptGuess = 0,diff;

// Variabel for vs computer
const int MAX = 26;
string alphabetGuess,alphabetAnswer;
int numberAnswer,numberGuess;
char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g','h', 'i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z' };
char hints;

// Variabel for vs player
string playerAlphabetGuess,playerAlphabetAnswer;
int playerNumberAnswer,playerNumberGuess;

// Menu Display Function
void startingMenu(){
  cout << "     GUESSING GAME     " << endl;
  cout << "-----------------------" << endl;
  cout << "| 1. VS Computer      |" << endl;
  cout << "| 2. VS Player        |" << endl;
  cout << "| 3. Rules            |" << endl;
  cout << "| 4. Exit             |" << endl;
  cout << "-----------------------" << endl;
  cout << " >> Option : ";
  cin >> option;
}

// Mode Display Function
void modeMenu() {
  cout << "     SELECTING MODE     " << endl;
  cout << "------------------------" << endl;
  cout << "| 1. Word              |" << endl;
  cout << "| 2. Number            |" << endl;
  cout << "------------------------" << endl;
  cout << " >> Select Mode : ";
  cin >> mode;
}

// Difficulity Display Function
void Difficulity(){ // Only for VS Computer
  cout << "     SELECTING DIFFICULITY     " << endl;
  cout << "-------------------------------" << endl;
  cout << "| 1. Easy   (a - g)(1 - 10)   |" << endl;
  cout << "| 2. Normal (a - m)(1 - 25)   |" << endl;
  cout << "| 3. Hard   (a - s)(1 - 50)   |" << endl;
  cout << "| 4. Insane (a - z)(1 - 100)  |" << endl;
  cout << "-------------------------------" << endl;
  cout << " >> Select Difficulity : ";
  cin >> diff;
}

// Main Function
int main(){
  do{
    srand(time(NULL));
    system("cls");
    startingMenu();
    switch(option){
      case 1: // VS computer
        system("cls");
        modeMenu();
        switch(mode){ // Selecting mode
          case 1: // Word
            system("cls");
            Difficulity();
            switch(diff){ // Selecting Difficulity
              case 1:
                system("cls");
                alphabetAnswer = alphabetAnswer + alphabet[rand() % 7];
                while(alphabetAnswer != alphabetGuess) {
                  system("cls");
                  cout << "         VS Computer" << endl;
                  cout << "----------------------------" << endl;
                  cout << " >> Guess my alphabet   : ";
                  cin >> alphabetGuess;
                  attemptGuess += 1;
                  cout << " >> Hints? (y/n)    : ";
                  cin >> hints;
                 if(hints == 'y') {
                  if(alphabetAnswer > "d") { cout << " The answer is above d" << endl; }
                  if(alphabetAnswer < "d") { cout << " The answer is below d" << endl; }
                 }
              
                 if(alphabetGuess != alphabetAnswer) { cout << " That isn't my alphabet." << endl; }
                 if(alphabetGuess == alphabetAnswer) {
                   cout << " You have guess my alphabet." << endl;
                   cout << " Number of Attempts : " << attemptGuess << endl;
                 }
              system("pause");
              }
            break;
              case 2:
                system("cls");
                alphabetAnswer = alphabetAnswer + alphabet[rand() % 13];
                while(alphabetAnswer != alphabetGuess) {
                  system("cls");
                  cout << "         VS Computer" << endl;
                  cout << "----------------------------" << endl;
                  cout << " >> Guess my alphabet   : ";
                  cin >> alphabetGuess;
                  attemptGuess += 1;
                  cout << " >> Hints? (y/n)    : ";
                  cin >> hints;
                 if(hints == 'y') {
                  if(alphabetAnswer > "h") { cout << " The answer is above h" << endl; }
                  if(alphabetAnswer < "h") { cout << " The answer is below h" << endl; }
                 }
              
                 if(alphabetGuess != alphabetAnswer) { cout << " That isn't my alphabet." << endl; }
                 if(alphabetGuess == alphabetAnswer) {
                   cout << " You have guess my alphabet." << endl;
                   cout << " Number of Attempts : " << attemptGuess << endl;
                 }
              system("pause");
              }
            break;
              case 3:
                system("cls");
                alphabetAnswer = alphabetAnswer + alphabet[rand() % 19];
                while(alphabetAnswer != alphabetGuess) {
                  system("cls");
                  cout << "         VS Computer" << endl;
                  cout << "----------------------------" << endl;
                  cout << " >> Guess my alphabet   : ";
                  cin >> alphabetGuess;
                  attemptGuess += 1;
                  cout << " >> Hints? (y/n)    : ";
                  cin >> hints;
                 if(hints == 'y') {
                  if(alphabetAnswer > "i") { cout << " The answer is above i" << endl; }
                  if(alphabetAnswer < "i") { cout << " The answer is below i" << endl; }
                 }
              
                 if(alphabetGuess != alphabetAnswer) { cout << " That isn't my alphabet." << endl; }
                 if(alphabetGuess == alphabetAnswer) {
                   cout << " You have guess my alphabet." << endl;
                   cout << " Number of Attempts : " << attemptGuess << endl;
                 }
              system("pause");
              }
            break;
              case 4:
                system("cls");
                alphabetAnswer = alphabetAnswer + alphabet[rand() % MAX];
                while(alphabetAnswer != alphabetGuess) {
                  system("cls");
                  cout << "         VS Computer" << endl;
                  cout << "----------------------------" << endl;
                  cout << " >> Guess my alphabet   : ";
                  cin >> alphabetGuess;
                  attemptGuess += 1;
                  cout << " >> Hints? (y/n)    : ";
                  cin >> hints;
                 if(hints == 'y') {
                  if(alphabetAnswer > "m") { cout << " The answer is above m" << endl; }
                  if(alphabetAnswer < "m") { cout << " The answer is below m" << endl; }
                 }
              
                 if(alphabetGuess != alphabetAnswer) { cout << " That isn't my alphabet." << endl; }
                 if(alphabetGuess == alphabetAnswer) {
                   cout << " You have guess my alphabet." << endl;
                   cout << " Number of Attempts : " << attemptGuess << endl;
                 }
              system("pause");
              }
            break;
            }
          case 2: // Number
            system("cls");
            Difficulity();
            switch(diff){
              case 1: // easy difficulity
              system("cls");
              numberAnswer = (rand() % 10) + 1;
                  while(numberAnswer != numberGuess){
                    system("cls");
                    cout << "         VS Computer" << endl;
                    cout << "----------------------------" << endl;
                    cout << " >> Guess my number : ";
                    cin >> numberGuess;
                    attemptGuess += 1;
                    cout << " >> Hints? (y/n)    : ";
                    cin >> hints;
                    if(hints == 'y') {
                      if(numberAnswer > 5 ) { cout << " The answer is above number 5" << endl; }
                      if(numberAnswer < 5 ) { cout << " The answer is below number 5" << endl; }
                    }
                    
                    if(numberGuess != numberAnswer) { cout << " That isn't my number." << endl; }
                    if(numberGuess == numberAnswer) {
                      cout << " You have guess my number." << endl;
                      cout << " Number of Attempts : " << attemptGuess << endl;
                    }
                    system("pause");
                  }
                break;
              case 2: // normal difficulity
              system("cls");
              numberAnswer = (rand() % 25) + 1;
                  while(numberAnswer != numberGuess){
                    system("cls");
                    cout << "         VS Computer" << endl;
                    cout << "----------------------------" << endl;
                    cout << " >> Guess my number : ";
                    cin >> numberGuess;
                    attemptGuess += 1;
                    cout << " >> Hints? (y/n)    : ";
                    cin >> hints;
                    if(hints == 'y') {
                      if(numberAnswer > 10 ) { cout << " The answer is above number 10" << endl; }
                      if(numberAnswer < 10 ) { cout << " The answer is below number 10" << endl; }
                    }
                    
                    if(numberGuess != numberAnswer) { cout << " That isn't my number." << endl; }
                    if(numberGuess == numberAnswer) {
                      cout << " You have guess my number." << endl;
                      cout << " Number of Attempts : " << attemptGuess << endl;
                    }
                    system("pause");
                  }
                break;
              case 3: // hard difficulity
              system("cls");
              numberAnswer = (rand() % 50) + 1;
                  while(numberAnswer != numberGuess){
                    system("cls");
                    cout << "         VS Computer" << endl;
                    cout << "----------------------------" << endl;
                    cout << " >> Guess my number : ";
                    cin >> numberGuess;
                    attemptGuess += 1;
                    cout << " >> Hints? (y/n)    : ";
                    cin >> hints;
                    if(hints == 'y') {
                      if(numberAnswer > 25 ) { cout << " The answer is above number 25" << endl; }
                      if(numberAnswer < 25 ) { cout << " The answer is below number 25" << endl; }
                    }
                    
                    if(numberGuess != numberAnswer) { cout << " That isn't my number." << endl; }
                    if(numberGuess == numberAnswer) {
                      cout << " You have guess my number." << endl;
                      cout << " Number of Attempts : " << attemptGuess << endl;
                    }
                    system("pause");
                  }
                break;
              case 4: // insane difficulity
              system("cls");
                numberAnswer = (rand() % 100) + 1;
                  while(numberAnswer != numberGuess){
                    system("cls");
                    cout << "         VS Computer" << endl;
                    cout << "----------------------------" << endl;
                    cout << " >> Guess my number : ";
                    cin >> numberGuess;
                    attemptGuess += 1;
                    cout << " >> Hints? (y/n)    : ";
                    cin >> hints;
                    if(hints == 'y') {
                      if(numberAnswer > 50 ) { cout << " The answer is above number 50" << endl; }
                      if(numberAnswer < 50 ) { cout << " The answer is below number 50" << endl; }
                    }
                    
                    if(numberGuess != numberAnswer) { cout << " That isn't my number." << endl; }
                    if(numberGuess == numberAnswer) {
                      cout << " You have guess my number." << endl;
                      cout << " Number of Attempts : " << attemptGuess << endl;
                    }
                    system("pause");
                  }
                break;
            }
          break;
        }
        break;
      case 2: // VS player
        system("cls");
        modeMenu();
        switch(mode){ // Selecting mode
          case 1: // Word (a-z)
            system("cls");
            cout << "Enter your alphabet : ";
            cin >> playerAlphabetAnswer;
            system("cls");
            while(playerAlphabetAnswer != playerAlphabetGuess){
              system("cls");
              cout << "           VS MODE" << endl;
              cout << "----------------------------" << endl;
              cout << " >> Guess my alphabet : ";
              cin >> playerAlphabetAnswer;
              if(playerAlphabetGuess != playerAlphabetAnswer) { cout << " That isn't the answer." << endl; }
              if(playerAlphabetGuess == playerAlphabetAnswer) {
                cout << " You have guess the answer." << endl;
                cout << " Number of Attempts : " << attemptGuess << endl;
              }
            }
            break;
          case 2: // Number (1-100)
            system("cls");
            cout << "Enter your number : ";
            cin >> playerNumberAnswer;
            system("cls");
            while(playerNumberAnswer != playerNumberGuess){
              system("cls");
              cout << "           VS MODE" << endl;
              cout << "----------------------------" << endl;
              cout << " >> Guess my number : ";
              cin >> playerNumberGuess;
              if(playerNumberGuess != playerNumberAnswer) { cout << " That isn't the number." << endl; }
              if(playerNumberGuess == playerNumberAnswer) {
                cout << " You have guess the answer." << endl;
                cout << " Number of Attempts : " << attemptGuess << endl;
              }
            }
            break;
        }
        break;
      case 3: // Rules
        system("cls");
        cout << "               RULES" << endl;
        cout << "---------------------------------------" << endl;
        cout << "| 1. Guess a alphabet or number       |" << endl;
        cout << "| 2. No Cheating for 2 player         |" << endl;
        cout << "| 3. For Hints in VS mode the player  |" << endl;
        cout << "| who is enter the number have to give|" << endl;
        cout << "| hints like low or high              |" << endl;
        cout << "| 4. Have Fun :D                      |" << endl;
        cout << "---------------------------------------" << endl;
        system("pause");
        break;
    }
  }
  while(option != 4);
  return 0;
}