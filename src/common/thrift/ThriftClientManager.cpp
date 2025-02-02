/* Copyright (c) 2018 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#include "common/thrift/ThriftClientManager.h"

#include "common/base/Base.h"

DEFINE_int32(conn_timeout_ms, 1000, "Connection timeout in milliseconds");
