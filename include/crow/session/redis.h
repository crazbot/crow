//
//  redis.h
//
//  Created by harrse on 5/5/17.
//  Copyright 2017 harrse. All rights reserved.
//

#ifndef __crow_session_redis_h
#define __crow_session_redis_h

#include "crow.h"
#include "hiredis.h"

namespace crow
{
    namespace session
    {
        struct RedisSession {

            RedisSession() {

            }

            struct context {

            };

            void before_handle(crow::request& req, crow::response& res, context& ctx) {

            }

            void after_handle(crow::request& req, crow::response& res, context& ctx) {

            }

        };
    }
}

#endif