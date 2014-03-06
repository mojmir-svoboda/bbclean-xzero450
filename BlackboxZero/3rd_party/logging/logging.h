#pragma once

#define TRACE_WINDOWS_SOCKET_FAILOVER_NOTIFY_MSVC 1
#define TRACE_WINDOWS_SOCKET_FAILOVER_TO_FILE 1
#define TRACE_CONFIG_INCLUDE "config.h"
#define TRACE_LEVELS_INCLUDE "levels.h"
#define TRACE_CONTEXTS_INCLUDE "contexts.h"
#if !defined TRACE_STATIC
# define TRACE_STATIC
#endif

#include <3rd_party/flogging/trace_client/trace.h>