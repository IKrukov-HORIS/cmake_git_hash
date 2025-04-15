#include <iostream>
#include "build_info.h"

int main(int argc, char** argv) {
     std::cout << "Git hash: " << GIT_HASH << std::endl;
     std::cout << "Build date time UTC: " << DATETIME << std::endl;

     return 0;
}
