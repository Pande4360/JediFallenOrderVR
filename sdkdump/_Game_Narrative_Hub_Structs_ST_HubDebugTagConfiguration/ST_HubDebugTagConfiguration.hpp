#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration {
#pragma pack(push, 1)
struct ST_HubDebugTagConfiguration {
    private: char pad_0[0x30]; public:
    void* get_SetTags_3_48C1C5A74CEB8E2D6693778F67579BD5();
    void* get_UnsetTags_5_BE7FBA0B432CBCC0E94E61B06CBBEB83();
    void* get_HubStateName_9_C1F4495C45201897AB0E79A79D1DD538();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
