#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(static_cast<unsigned char>(c));
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowels(const string &s) {
    int count = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (isVowel(s[i])) {
            ++count;
        }
    }
    return count;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int vowelCount = countVowels(sentence);

    if (vowelCount > 0) {
        cout << "There are " << vowelCount << " vowel";
        if (vowelCount > 1) cout << "s";
        cout << " in the sentence.\n";
    } else {
        cout << "There are no vowels in the sentence.\n";
    }

    return 0;
}

