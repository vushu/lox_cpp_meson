#include <iostream>
#include <lox_cpp/scanner.hpp>
#include <lox_cpp/tokens.hpp>
int main()
{
    std::string code = "{ 2 + 2;}";
    lox_cpp::Scanner scanner { code };
    auto tokens = scanner.scan_tokens();

    for (auto& t : tokens) {
        std::cout << t.to_string() << std::endl;
    }
    if (tokens.size() == 7) {
        std::cout << "-> OK <-" << std::endl;
        return 0;
    }

    return 1;
}
