#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroUpgradeFlags.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPlayerOverrideSettingsLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags GetOverrideHeroUpgradeFlags();
    _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags GetOverrideHeroLoadoutFlags();
}; // Size: 0x28
#pragma pack(pop)
}
