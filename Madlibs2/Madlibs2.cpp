#include <string>
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello! Welcome to MadLibs!" << endl;
	string Noun1;
	string Noun2;
	string Noun3;
	string Adjective1;
	string Adjective2;
	string Verb1;
	string Verb2;
	string ProperNoun1;
	string ProperNoun2;
	cout << "Please enter the name of a friend: " << endl;
	cin >> ProperNoun1;
	cout << "Please enter an animal: " << endl;
	cin >> Noun1;
	cout << "Please enter a noun: " << endl;
	cin >> Noun2;
	cout << "Please enter an adjective: " << endl;
	cin >> Adjective1;
	cout << "Please enter a verb in the past tense: " << endl;
	cin >> Verb1;
	cout << "Please enter another verb this time in the form of a command: " << endl;
	cin >> Verb2;
	cout << "Please enter an adjective: " << endl;
	cin >> Adjective2;
	cout << "Please enter the name of someone in the room: " << endl;
	cin >> ProperNoun2;
	cout << "Please enter a noun: " << endl;
	cin >> Noun3;






	cout << "One day, " << ProperNoun1 << " was walking his/her " << Noun1 << ", wearing his/her " << Noun2 << " when his/her " << Adjective1 << " mother " << Verb1 << " into the room and screamed " << Verb2 << " for your life!" << endl;
	cout << "It was " << ProperNoun2 << ", your mother's " << Adjective2 << " " << Noun3 << ", who had gone mad from too much sugar." << endl;
}