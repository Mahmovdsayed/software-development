#include <iostream>
#include <string>
using namespace std;

void displayWebTrack() {
    cout << "Recommended software development track: Web Development\n";
    cout << "Programming languages to learn: HTML, CSS, JavaScript, PHP/Python/Ruby, SQL\n";
}

void displayMobileTrack() {
    cout << "Recommended software development track: Mobile Development\n";
    cout << "Programming languages to learn: Java/Kotlin (Android), Swift/Objective-C (iOS)\n";
}

void displayGameTrack() {
    cout << "Recommended software development track: Game Development\n";
    cout << "Programming languages to learn: C++, C#, Java, Python\n";
}

void displayDataScienceTrack() {
    cout << "Recommended software development track: Data Science\n";
    cout << "Programming languages to learn: Python, R, SQL, Machine Learning libraries (NumPy, Pandas, TensorFlow, etc.)\n";
}

void displayAIMLTrack() {
    cout << "Recommended software development track: Artificial Intelligence/Machine Learning\n";
    cout << "Programming languages to learn: Python, R, Scala, Lisp, Prolog\n";
}

int main() {
    string userInterest;

    while (true) {
        cout << "What are you interested in developing? (Web, Mobile, Game, Data Science, or AI/ML): ";
        getline(cin, userInterest);

        if (userInterest == "Web") {
            displayWebTrack();
            break;
        } else if (userInterest == "Mobile") {
            displayMobileTrack();
            break;
        } else if (userInterest == "Game") {
            displayGameTrack();
            break;
        } else if (userInterest == "Data Science") {
            displayDataScienceTrack();
            break;
        } else if (userInterest == "AI/ML") {
            displayAIMLTrack();
            break;
        } else {
            cout << "Sorry, I didn't understand your interest. Please try again.\n";
            continue;
        }
    }

    return 0;
}