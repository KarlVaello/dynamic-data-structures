#include "uuid.h"

namespace uuid
{
    char* gen_uuid() {

        srand(time(0));  // Initialize random number generator.

        char res[13] = "000000000000";

        const char* v = "0123456789abcdef";
        
        for (int i = 0; i < 13; i++)
        {
            res[i] = v[rand() % 10];
        }

        std::cout << res << std::endl;

        return res;
    }
};
