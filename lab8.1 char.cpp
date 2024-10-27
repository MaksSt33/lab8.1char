#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

bool ContainsTripleStars(const char* s) {
    return strstr(s, "***") != nullptr;
}

char* ReplaceTripleStars(char* s) {
    char* result = new char[strlen(s) + 1];
    char* temp = result;
    char* pos = s;

    while ((pos = strstr(pos, "***")) != nullptr) {
        strncat(temp, s, pos - s);
        strcat(temp, "!!");
        pos += 3;
        s = pos;
    }
    strcat(temp, s);
    strcpy(s, result);
    delete[] result;
    return s;
}
int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    if (ContainsTripleStars(str)) {
        cout << "String contains a group of '***'" << endl;
    }
    else {
        cout << "No '***' found" << endl;
    }

    cout << "Modified string: " << ReplaceTripleStars(str) << endl;
    return 0;
}
