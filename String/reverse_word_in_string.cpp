#include <iostream>
#include <cstring>
using namespace std;

// Reverse characters from index low to high
void reverse(char str[], int low, int high) {
    while (low < high) {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}

// Reverse each word in the string
void reverseWords(char str[]) {
    int n = strlen(str);
    int start = 0;

    for (int end = 0; end < n; end++) {
        if (str[end] == ' ') {
            reverse(str, start, end - 1); // reverse current word
            start = end + 1;
        }
    }

    reverse(str, start, n - 1); // reverse last word
}

int main() {
    char s[] = "hello welcome to Hogwarts";

    reverseWords(s);
    cout << s << endl; // Output: "olleh emoclew ot stwograH"

    return 0;
}
