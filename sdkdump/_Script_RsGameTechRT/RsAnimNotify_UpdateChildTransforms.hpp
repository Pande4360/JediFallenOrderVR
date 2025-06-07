#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotify_UpdateChildTransforms : public _Script_Engine::AnimNotify {
    private: char pad_38[0x8]; public:
    bool get_UpdateChildTransforms();
    void set_UpdateChildTransforms(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
