#ifndef __DSL_EXCEPTIONS_H__
#define __DSL_EXCEPTIONS_H__

#include <exception>
#include <string>

namespace dsl
{
    namespace exceptions
    {
        // Base exception for DSL Entities
        class DSLException : public std::exception
        {
        private:
            const std::string __message;

        public:
            DSLException(const std::string &message);
            const char *what() const noexcept override;
        };
    };
};

#endif /* __DSL_EXCEPTIONS_H__ */