#include <stdio.h>
#include <string.h>

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate the number of anagrams
int countAnagrams(char *word) {
    int len = strlen(word);
    int freq[26] = {0}; // Array to store frequencies of each letter
    int i;

    // Calculate frequencies of each letter in the word
    for (i = 0; i < len; i++) {
        freq[word[i] - 'a']++;
    }

    // Calculate factorial for the number of letters in the word considering frequencies
    int num_anagrams = factorial(len);

    // Divide by factorials of frequencies of each letter
    for (i = 0; i < 26; i++) {
        if (freq[i] > 1) {
            num_anagrams /= factorial(freq[i]);
        }
    }

    return num_anagrams;
}

int main() {
    char word[15]; // Maximum word length 14 characters + '\0'

    // Input the word
    printf("Enter a word: ");
    scanf("%s", word);

    // Calculate and output the number of anagrams
    int num_anagrams = countAnagrams(word);
    printf("Number of possible anagrams: %d\n", num_anagrams);

    return 0;
}
