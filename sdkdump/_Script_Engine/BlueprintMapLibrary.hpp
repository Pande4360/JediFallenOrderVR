#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BlueprintMapLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetMapPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value);
    void Map_Values(void*& TargetMap, void*& Values);
    bool Map_Remove(void*& TargetMap, int32_t& Key);
    int32_t Map_Length(void*& TargetMap);
    void Map_Keys(void*& TargetMap, void*& Keys);
    bool Map_Find(void*& TargetMap, int32_t& Key, int32_t& Value);
    bool Map_Contains(void*& TargetMap, int32_t& Key);
    void Map_Clear(void*& TargetMap);
    void Map_Add(void*& TargetMap, int32_t& Key, int32_t& Value);
}; // Size: 0x28
#pragma pack(pop)
}
