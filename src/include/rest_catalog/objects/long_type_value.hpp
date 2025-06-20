
#pragma once

#include "yyjson.hpp"
#include "duckdb/common/string.hpp"
#include "duckdb/common/vector.hpp"
#include "duckdb/common/case_insensitive_map.hpp"

using namespace duckdb_yyjson;

namespace duckdb {
namespace rest_api_objects {

class LongTypeValue {
public:
	LongTypeValue();
	LongTypeValue(const LongTypeValue &) = delete;
	LongTypeValue &operator=(const LongTypeValue &) = delete;
	LongTypeValue(LongTypeValue &&) = default;
	LongTypeValue &operator=(LongTypeValue &&) = default;

public:
	static LongTypeValue FromJSON(yyjson_val *obj);

public:
	string TryFromJSON(yyjson_val *obj);

public:
	int64_t value;
};

} // namespace rest_api_objects
} // namespace duckdb
