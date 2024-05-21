#include <stdlib.h>

int word_puzzle(size_t N, char **words){
    if (N > 100)
        return 0;
    size_t n = 0;
    while (n < N - 1){
        char last = words[n][strlen(words[n]) - 1]; 
        char first = words[n + 1][0];
        if (last != first)
            return 0;
        n++;
    }
    return 1;
}
