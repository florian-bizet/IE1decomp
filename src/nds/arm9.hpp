#include <cstdint>
#include <string>

#define SP 13
#define LR 14
#define PROGRAM_COUNT 14

class ARM9 {
    public:
        int32_t r[16];
        ARM9();
        std::string toString();
};