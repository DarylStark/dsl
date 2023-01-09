#ifndef __DSL_TYPES_EVENT_H__
#define __DSL_TYPES_EVENT_H__

#include <string>

namespace dsl
{
    namespace types
    {
        template <class ObjectType, class SubscriptionType>
        struct Event
        {
            const ObjectType &object;
            const SubscriptionType subscription;
        };

        template <class CallbackType>
        struct Subscription
        {
            CallbackType callback;
            std::string identifier;
            bool run_as_thread = false;
        };
    };
};

#endif /* __DSL_TYPES_EVENT_H__ */