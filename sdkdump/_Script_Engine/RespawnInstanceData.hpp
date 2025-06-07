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
struct RespawnInstanceData {
    private: char pad_0[0x30]; public:
    int32_t& get_InstanceDataUID();
    void* get_Name();
    void* get_Location();
    void* get_Rotation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
