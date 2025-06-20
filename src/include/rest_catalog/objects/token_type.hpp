
#pragma once

#include "yyjson.hpp"
#include "duckdb/common/string.hpp"
#include "duckdb/common/vector.hpp"
#include "duckdb/common/case_insensitive_map.hpp"

using namespace duckdb_yyjson;

namespace duckdb {
namespace rest_api_objects {

class TokenType {
public:
	TokenType();
	TokenType(const TokenType &) = delete;
	TokenType &operator=(const TokenType &) = delete;
	TokenType(TokenType &&) = default;
	TokenType &operator=(TokenType &&) = default;

public:
	static TokenType FromJSON(yyjson_val *obj);

public:
	string TryFromJSON(yyjson_val *obj);

public:
	string value;
};

} // namespace rest_api_objects
} // namespace duckdb
