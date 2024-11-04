#ifndef LOCATION_H
#define LOCATION_H
#include <cstddef>
#include <ostream>
namespace cc_
{
    struct Location
    {
        using position = std::size_t;
        position begin{};
        position end{};
        position current{};

        Location() = default;
        Location(const position begin, const position end) : begin(begin), end(end) {}
        friend std::ostream &operator<<(std::ostream &os, const Location &loc)
        {
            os << loc.begin << ":" << loc.end - loc.current;
            return os;
        }

        void next_word(const position length)
        {
            current = length;
            end += length;
        }

        void next_line(const position line_number)
        {
            begin = line_number;
            end = 1;
        }
    };
}
#endif