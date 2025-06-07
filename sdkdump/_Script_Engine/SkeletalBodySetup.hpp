#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BodySetup.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalBodySetup : public BodySetup {
    private: char pad_770[0x20]; public:
    bool get_bSkipScaleFromAnimation();
    void set_bSkipScaleFromAnimation(bool value);
    void* get_PhysicalAnimationData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x790
#pragma pack(pop)
}
