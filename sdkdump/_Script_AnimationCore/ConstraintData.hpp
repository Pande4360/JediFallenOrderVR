#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationCore {
#pragma pack(push, 1)
struct ConstraintData {
    private: char pad_0[0x80]; public:
    void* get_Constraint();
    float& get_Weight();
    bool get_bMaintainOffset();
    void set_bMaintainOffset(bool value);
    void* get_Offset();
    void* get_CurrentTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
