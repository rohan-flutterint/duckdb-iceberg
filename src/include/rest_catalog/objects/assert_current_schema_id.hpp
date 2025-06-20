
#pragma once

#include "yyjson.hpp"
#include "duckdb/common/string.hpp"
#include "duckdb/common/vector.hpp"
#include "duckdb/common/case_insensitive_map.hpp"
#include "rest_catalog/objects/table_requirement_type.hpp"

using namespace duckdb_yyjson;

namespace duckdb {
namespace rest_api_objects {

class AssertCurrentSchemaId {
public:
	AssertCurrentSchemaId();
	AssertCurrentSchemaId(const AssertCurrentSchemaId &) = delete;
	AssertCurrentSchemaId &operator=(const AssertCurrentSchemaId &) = delete;
	AssertCurrentSchemaId(AssertCurrentSchemaId &&) = default;
	AssertCurrentSchemaId &operator=(AssertCurrentSchemaId &&) = default;

public:
	static AssertCurrentSchemaId FromJSON(yyjson_val *obj);

public:
	string TryFromJSON(yyjson_val *obj);

public:
	TableRequirementType type;
	int32_t current_schema_id;
};

} // namespace rest_api_objects
} // namespace duckdb
