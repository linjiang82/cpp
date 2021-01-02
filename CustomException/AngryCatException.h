#include <stdexcept>
#include <string>

class AngryCatException : public std::runtime_error {
public:
  AngryCatException()
      : std::runtime_error("Cat is angry"){

        };
  AngryCatException(const std::string &err) : std::runtime_error(err){};
};
