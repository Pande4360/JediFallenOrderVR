#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ConstraintDescriptionEx.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationCore {
#pragma pack(push, 1)
struct TransformConstraintDescription : public ConstraintDescriptionEx {
    private: char pad_10[0x8]; public:
    void* get_TransformType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
