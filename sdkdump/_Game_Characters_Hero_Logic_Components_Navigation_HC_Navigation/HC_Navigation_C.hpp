#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCharacterNavigationManagementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Navigation {
#pragma pack(push, 1)
struct HC_Navigation_C : public _Script_RsGameTechRT::RsCharacterNavigationManagementComponent {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x288
#pragma pack(pop)
}
