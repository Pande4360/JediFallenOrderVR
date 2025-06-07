#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct GameplayTagsManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x168]; public:
    void* get_TagSources();
    void* get_RestrictedGameplayTagTables();
    void* get_GameplayTagTables();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x190
#pragma pack(pop)
}
