
// It is a roborio
#ifdef __FRC_ROBORIO__

#if IS_ROBORIO_TEST == 0
#error "This shouldn't happen"
#endif

// Its not a roborio
#else

#if IS_ROBORIO_TEST == 1
#error "This shouldn't happen"
#endif

#endif

#include <iostream>

int main() {
    std::cout << "Hello world: " << IS_ROBORIO_TEST << std::endl;
#ifdef __FRC_ROBORIO__
    std::cout << "Roborio: " << __FRC_ROBORIO__ << std::endl;
#endif

    return 0;
}