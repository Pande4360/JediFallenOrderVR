#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_NavigationSystem\AbstractNavData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsFlyingAbstractNavData : public _Script_NavigationSystem::AbstractNavData {
    private: char pad_580[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x588
#pragma pack(pop)
}
