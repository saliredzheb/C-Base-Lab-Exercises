#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Handling of data initialization
    // Personal identity
    char surname[30];
    char name[30];
    char fathersName[30];
    char nationality[30];
    char dateOfBirth[30];
    char sex[30];  
    char dateOfExpiry[30];
    char personalNo[30];

    // Official identification
    char documentNumber[30];
    char placeOfBirth[30];
    char residence[90];
    char issuer[30];
    char dateOfissue[30];

    // Physhical attributes
    char height[10];
    char eyeColor[20];

    // Input Handling

    cout << "Surname: ";
    cin.getline(surname, 30);

    cout << "Name: ";
    cin.getline(name, 30);

    cout << "Father's name: ";
    cin.getline(fathersName, 30);

    cout << "Nationality: ";
    cin.getline(nationality, 30);

    cout << "Date of birth: ";
    cin.getline(dateOfBirth, 30);

    cout << "Sex: ";
    cin.getline(sex, 30);

    cout << "Date of expiry: ";
    cin.getline(dateOfExpiry, 30);

    cout << "Personal NO: ";
    cin.getline(personalNo, 30);

    cout << "Document number: ";
    cin.getline(documentNumber, 30);

    cout << "Place of birth: ";
    cin.getline(placeOfBirth, 30);

    cout << "Residence: ";
    cin.getline(residence, 90);

    cout << "Issuer: ";
    cin.getline(issuer, 30);

    cout << "Date of issue: ";
    cin.getline(dateOfissue, 30);

    cout << "Height: ";
    cin.getline(height, 30);

    cout << "Eye color: ";
    cin.getline(eyeColor, 30);

    // Output handling
    cout << endl << setfill('-') << setw(10);
    cout << '\n'
        << surname << '\n'
        << name << '\n'
        << fathersName << '\n'
        << nationality << '\n'
        << dateOfBirth << '\n'
        << sex << '\n'
        << dateOfExpiry << '\n'
        << personalNo << '\n'
        << documentNumber << '\n'
        << placeOfBirth << '\n'
        << residence << '\n'
        << issuer << '\n'
        << dateOfissue << '\n'
        << height << '\n'
        << eyeColor << '\n';
    cout << endl << setfill('-') << setw(10);

    return 0;
}