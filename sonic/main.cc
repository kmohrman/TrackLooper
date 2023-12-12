#include "main.h"

//___________________________________________________________________________________________________________________________________________________________________________________________
int main() {
    std::cout << "HELLO world from sonic main" << std::endl;

    // Run the code
    run_sdl();

    return 0;
}

void run_sdl() {
    std::cout << "Hi from run_sdl!" << std::endl;

    SDL::LST lst;

    lst.eventSetup();


}
