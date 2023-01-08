#include "dsl_exceptions.h"

namespace dsl
{
    namespace exceptions
    {
        DSLException::DSLException(const std::string &message)
            : __message(message)
        {
        }

        const char *DSLException::what() const noexcept
        {
            return __message.c_str();
        }
    };
};