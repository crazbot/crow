#pragma once

#ifdef __APPLE__
#pragma clang diagnostic push
#pragma clang system_header
#endif

#if defined(_WIN32) || defined(_WIN64)
#pragma warning(push)
#pragma warning(disable:4244)	// __int64 to uint16_t
#pragma warning(disable:4267)	// size_t to int
#pragma warning(disable:4293)	// shift count negative or too big, undefined behavior
#pragma warning(disable:4800)	// int to true or false
#pragma warning(disable:4996)	// unsafe
#endif

#include "crow/query_string.h"
#include "crow/http_parser_merged.h"
#include "crow/ci_map.h"
#include "crow/TinySHA1.hpp"
#include "crow/settings.h"
#include "crow/socket_adaptors.h"
#include "crow/json.h"
#include "crow/mustache.h"
#include "crow/logging.h"
#include "crow/dumb_timer_queue.h"
#include "crow/utility.h"
#include "crow/common.h"
#include "crow/http_request.h"
#include "crow/websocket.h"
#include "crow/parser.h"
#include "crow/http_response.h"
#include "crow/middleware.h"
#include "crow/routing.h"
#include "crow/middleware_context.h"
#include "crow/http_connection.h"
#include "crow/http_server.h"
#include "crow/app.h"

#ifdef __APPLE__
#pragma clang diagnostic pop
#endif

#if defined(_WIN32) || defined(_WIN64)
#pragma warning(pop)
#endif
