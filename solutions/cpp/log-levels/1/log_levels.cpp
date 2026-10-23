#include <string>
// We have no error checking is find ever returns npos,not the best code 
// We more or less follow the format of the tests and have no edge cases
namespace log_line {
    std::string message(std::string line) {
        // return the message
        // line.substr(start, n) extracts n characters from start
        // line.find(search) search is the content we are trying to find
        auto space_index = line.find(" ");
        return line.substr(space_index + 1, line.length() - (space_index + 1));
    }
    std::string log_level(std::string line) {
        // return the log level
        auto first_bracket = line.find("[");
        auto second_bracket = line.find("]");
        return line.substr(first_bracket + 1, second_bracket -(first_bracket + 1));
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        return log_line::message(line) + " (" + log_line::log_level(line) + ")"; 
    }
}  // namespace log_line
