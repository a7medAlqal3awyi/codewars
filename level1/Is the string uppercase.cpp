// Is the string uppercase ?

#include <string>
#include <cctype>


#include <string>
#include <cctype>

bool is_uppercase(const std::string &s) {
  for (size_t i = 0; i < s.length(); ++i)
    if (std::islower(s[i]))
      return false;
  return true;
}