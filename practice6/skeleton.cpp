#include <iostream>

extern "C" void run();

int main() {
    std::cout << "Calling run() from assembly..." << std::endl;
    run();
    std::cout << "Returned from run()." << std::endl;
    return 0;
}
