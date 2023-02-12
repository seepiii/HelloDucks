#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cout << "Please select a language to say hello to the ducks in:" << endl;
    cout << "1. English" << endl;
    cout << "2. Spanish" << endl;
    cout << "3. Mandarin" << endl;
    cout << "4. Hindi" << endl;
    cout << "5. French" << endl;
    cout << "6. German" << endl;
    cout << "7. Telugu" << endl;
    cout << "8. Arabic" << endl;
    cout << "9. Greek" << endl;
    cout << "10. Portuguese" << endl;

    int selection;
    cin >> selection;
    cin.ignore();
    cout << "Do you wish to reverse the message so that when you speak it the ducks see it correctly? (yes/no)" << endl;
    string rev;
    getline(cin,rev);
    string message;

    if (rev == "yes") {
    switch (selection) {
        case 1:
            message = "Hello Ducks!";
            break;
        case 2:
            message = "¡Hola Patos!";
            break;
        case 3:
            message = "你好鸭子！";
            break;
        case 4:
            message = "नमस्ते बत्तू!";
            break;
        case 5:
            message = "Bonjour Canards!";
            break;
        case 6:
            message = "Hallo Enten!";
            break;
        case 7:
            message = "హలో డక్స్!";
            break;
        case 8:
            message = "مرحبا بالبط!";
            break;
        case 9:
            message = "Χαίρετε Πάπιες!";
            break;
        case 10:
            message = "Olá Patos!";
            break;
        default:
            message = "Hello Ducks! This was an invalid selection, try again.";
            break;
    }
     reverse(message.begin(), message.end());
}
else {
    switch (selection) {
    case 1:
        message = "Hello Ducks!";
        break;
    case 2:
        message = "¡Hola Patos!";
        break;
    case 3:
        message = "你好鸭子！";
        break;
    case 4:
        message = "नमस्ते बत्तू!";
        break;
    case 5:
        message = "Bonjour Canards!";
        break;
    case 6:
        message = "Hallo Enten!";
        break;
    case 7:
        message = "హలో డక్స్!";
        break;
    case 8:
        message = "مرحبا بالبط!";
        break;
    case 9:
        message = "Χαίρετε Πάπιες!";
        break;
    case 10:
        message = "Olá Patos!";
        break;
    default:
        message = "Invalid selection.";
        break;
}
}

    cout << message << endl;

    return 0;
}

