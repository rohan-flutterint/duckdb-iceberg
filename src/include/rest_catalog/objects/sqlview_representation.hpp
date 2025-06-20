
#pragma once

#include "yyjson.hpp"
#include "duckdb/common/string.hpp"
#include "duckdb/common/vector.hpp"
#include "duckdb/common/case_insensitive_map.hpp"

using namespace duckdb_yyjson;

namespace duckdb {
namespace rest_api_objects {

class SQLViewRepresentation {
public:
	SQLViewRepresentation();
	SQLViewRepresentation(const SQLViewRepresentation &) = delete;
	SQLViewRepresentation &operator=(const SQLViewRepresentation &) = delete;
	SQLViewRepresentation(SQLViewRepresentation &&) = default;
	SQLViewRepresentation &operator=(SQLViewRepresentation &&) = default;

public:
	static SQLViewRepresentation FromJSON(yyjson_val *obj);

public:
	string TryFromJSON(yyjson_val *obj);

public:
	string type;
	string sql;
	string dialect;
};

} // namespace rest_api_objects
} // namespace duckdb
