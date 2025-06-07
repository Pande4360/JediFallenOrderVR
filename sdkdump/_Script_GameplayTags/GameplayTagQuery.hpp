#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
#pragma pack(push, 1)
struct GameplayTagQuery {
    private: char pad_0[0x48]; public:
    int32_t& get_TokenStreamVersion();
    void* get_TagDictionary();
    void* get_QueryTokenStream();
    void* get_UserDescription();
    void* get_AutoDescription();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
