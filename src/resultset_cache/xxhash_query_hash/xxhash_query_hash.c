/*
* Copyright 2018-2019 Redis Labs Ltd. and Contributors
*
* This file is available under the Redis Labs Source Available License Agreement
*/

#include "xxhash_query_hash.h"
#include "xxhash/xxhash.h"

void hashQuery(const char* query, size_t queryLength, char* buffer){
    unsigned long long const hash = XXH64(query, queryLength, 0);
    memcpy(buffer, &hash, HASH_KEY_LENGTH);
}

