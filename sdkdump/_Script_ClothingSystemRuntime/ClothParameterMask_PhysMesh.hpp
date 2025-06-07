#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ClothingSystemRuntime {
#pragma pack(push, 1)
struct ClothParameterMask_PhysMesh {
    private: char pad_0[0x30]; public:
    void* get_MaskName();
    void* get_CurrentTarget();
    float& get_MaxValue();
    float& get_MinValue();
    void* get_Values();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
