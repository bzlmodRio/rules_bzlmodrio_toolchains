
// Roborio Toolchain
#if defined(__FRC_ROBORIO__) && IS_ROBORIO_TEST == 0
#error "This shouldn't happen"
#elif !defined(__FRC_ROBORIO__) and IS_ROBORIO_TEST == 1
#error "This shouldn't happen"
#endif

// Roborio Toolchain
#if defined(__CROSS_BULLSEYE__) && IS_BULLSEYE_TEST == 0
#error "This shouldn't happen"
#elif !defined(__CROSS_BULLSEYE__) and IS_BULLSEYE_TEST == 1
#error "This shouldn't happen"
#endif



#include <iostream>

int main() {
    std::cout << "Hello world: " << IS_ROBORIO_TEST << std::endl;
#ifdef __FRC_ROBORIO__
    std::cout << "Roborio: " << __FRC_ROBORIO__ << std::endl;
#endif

    return 0;
}