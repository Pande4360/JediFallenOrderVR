#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct FastArraySerializerItem {
    private: char pad_0[0xc]; public:
    int32_t& get_ReplicationID();
    int32_t& get_ReplicationKey();
    int32_t& get_MostRecentArrayReplicationKey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
