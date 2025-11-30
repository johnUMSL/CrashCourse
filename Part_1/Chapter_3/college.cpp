#include <cstdio>

struct College {
    char name[256];
};

void print_names(College* colleges, size_t n_colleges) {
    for (size_t i = 0; i < n_colleges; i++) {
        printf("%s\n", colleges[i].name);
    }
    
}

int main() {
    College best_colleges[] = { "Yale", "MIT", "UMSL", "Harvard" };
    print_names(best_colleges, sizeof(best_colleges) / sizeof(College));
}