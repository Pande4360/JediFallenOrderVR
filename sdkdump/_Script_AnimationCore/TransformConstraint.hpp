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
struct TransformConstraint {
    private: char pad_0[0x28]; public:
    void* get_Operator();
    void* get_SourceNode();
    void* get_TargetNode();
    float& get_Weight();
    bool get_bMaintainOffset();
    void set_bMaintainOffset(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
