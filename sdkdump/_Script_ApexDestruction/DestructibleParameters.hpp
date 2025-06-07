#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ApexDestruction {
#pragma pack(push, 1)
struct DestructibleParameters {
    private: char pad_0[0x88]; public:
    void* get_DamageParameters();
    void* get_DebrisParameters();
    void* get_AdvancedParameters();
    void* get_SpecialHierarchyDepths();
    void* get_DepthParameters();
    void* get_Flags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
