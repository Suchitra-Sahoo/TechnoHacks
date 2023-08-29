#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string generateRandomPassword(int length) {
    const string charSet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    string password = "";

    srand(time(0)); // Seed the random number generator with current time

    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % charSet.length();
        password += charSet[randomIndex];
    }

    return password;
}

int main() {
    int passwordLength;

    cout << "Enter the desired password length: ";
    cin >> passwordLength;

    if (passwordLength <= 0) {
        cout << "Invalid password length. Please enter a positive integer." << endl;
        return 1;
    }

    string generatedPassword = generateRandomPassword(passwordLength);
    cout << "Generated Password: " << generatedPassword << endl;

    return 0;
}
