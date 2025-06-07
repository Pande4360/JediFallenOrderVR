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
struct TransformFilter {
    private: char pad_0[0x9]; public:
    void* get_TranslationFilter();
    void* get_RotationFilter();
    void* get_ScaleFilter();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x9
#pragma pack(pop)
}
