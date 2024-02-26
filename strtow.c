#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int is_space(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (is_space(*str)) {
            in_word = 0;
        } else if (!in_word) {
            count++;
            in_word = 1;
        }
        str++;
    }

    return count;
}

char *_strcpy(char *dest, const char *src, int n) {
    char *originalDest = dest;

    while (n-- > 0 && (*dest++ = *src++) != '\0')
        ;

    return originalDest;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    if (num_words == 0) {
        return NULL;
    }

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    int word_length = 0;
    int in_word = 0;

    while (*str) {
        if (is_space(*str)) {
            if (in_word) {
                words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_index] == NULL) {
                    for (int i = 0; i < word_index; ++i) {
                        free(words[i]);
                    }
                    free(words);
                    return NULL;
                }
                _strcpy(words[word_index], str - word_length, word_length);
                words[word_index][word_length] = '\0';
                word_index++;
                word_length = 0;
            }
        } else {
            in_word = 1;
            word_length++;
        }
        str++;
    }

    words[num_words] = NULL;

    return words;
}

int main() {
    char **result = strtow(" Talk is cheap. Show me the code. ");
    if (result != NULL) {
        for (int i = 0; result[i] != NULL; ++i) {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }

    return 0;
}

