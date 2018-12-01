#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string w, int i) {
	return (i == w.length() - 1) ? true : (w[i] != w[(w.length() - 1) - i]) ? false : isPalindrome(w, ++i); //Returns a nested conditional operater that first checks to see if the i variable's value equals the length of the string minus 1. If it's not, it'll check to see if both of the specified characters in the condition are different. If they aren't different, it will run the function again.
}

int main() {
	string w; //a string variable

	cout << "Enter word: ";
	cin >> w; //retrieves the input

	cout << w << ((isPalindrome(w, 0) == true) ? " is a palindrome" : " isn't a palindrome") << endl; //the conditional operator within this cout statement checks if the recursion function returns true then displays the value based on the result

	return 0;
}