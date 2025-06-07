#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_NavigationSystem\NavigationSystemV1.hpp"
namespace _Script_NavigationSystem {
struct NavigationData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsNavigationSystem : public _Script_NavigationSystem::NavigationSystemV1 {
    private: char pad_370[0x8]; public:
    _Script_NavigationSystem::NavigationData*& get_FlyingAbstractNavData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x378
#pragma pack(pop)
}
