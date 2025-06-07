#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct Constraint {
    private: char pad_0[0x28]; public:
    void* get_TargetBone();
    void* get_OffsetOption();
    void* get_TransformType();
    void* get_PerAxis();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
