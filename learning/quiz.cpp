#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Quistions {
    public : 
      string question;
      string answer;

};

void quiz();
//  quiz in cpp
int main() {
    quiz();
    return 0;
}

void quiz() {
    vector<Quistions> quiza = {
        {"What is the capital of France?", "Paris"},
        {"What is 2 + 2?", "4"},
        {"What is the largest planet in our solar system?", "Jupiter"},
        {"Who wrote 'To Kill a Mockingbird'?", "Harper Lee"},
        {"What is the boiling point of water?", "100"}
    };
    
    
    srand(time(0));
    
    int randomIndex = rand() % quiza.size();
    string userAnswer;
    cout << quiza[randomIndex].question << endl;
    cout << "Type the correct answer : " << endl;
    
    getline(cin,userAnswer);

    if (userAnswer == quiza[randomIndex].answer) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is: " << quiza[randomIndex].answer << endl;
    }
}