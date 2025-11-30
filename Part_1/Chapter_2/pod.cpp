#include <cstdint>

struct PodStruct {
    uint64_t a;
    char b[256];
    bool c;
};

int main() {
    PodStruct initialized_pod1{}; // all fields zeroed
    PodStruct initialized_pod2 = {}; // all fields zeroed

    PodStruct initialized_pod3{ 42, "Hello"}; // fields a & b set; c= 0
    PodStruct initialized_pod4{ 42, "Hello", true }; // all fields set

    int array_1[]{ 1, 2, 3 };  // Array of length 3: 1, 2, 3
    int array_2[5]{};          // Array of length 5: 0, 0, 0, 0, 0
    int array_3[5]{ 1, 2, 3 }; // Array of length 5: 1, 2, 3, 0, 0
    int array_4[5]; // Array of length 5; uninitialized values
}