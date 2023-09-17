#include <iostream>
#include <lox_cpp/scanner.hpp>
#include <lox_cpp/tokens.hpp>
int main(int /*argc*/, char** /*argv*/)
{
    std::string code = "{ 2+2; }";
    lox_cpp::Scanner scanner { code };
    auto tokens = scanner.scan_tokens();
    for (auto& t : tokens) {
        t.to_string();
    }
    if (tokens.size() == 7) {
        std::cout << "-> OK <-" << std::endl;
        return 0;
    }

    return 1;
}
