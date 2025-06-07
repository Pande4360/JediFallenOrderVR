#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "RsBitfield_HeroInputFlags.hpp"
#include "RsBitfield_HeroLoadoutFlags.hpp"
#include "RsBitfield_HeroUpgradeFlags.hpp"
#include "RsBitfield_NavState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsHeroBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetGamepadCameraYAxisInverted(_Script_CoreUObject::Object* WorldContextObject, bool bInvert);
    _Script_RsGameTechRT::RsBitfield_NavState MakeFRsBitfield_NavState(void* Flags);
    _Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags MakeFRsBitfield_HeroUpgradeFlags(void* Flags);
    _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags MakeFRsBitfield_HeroLoadoutFlags(void* Flags);
    _Script_RsGameTechRT::RsBitfield_HeroInputFlags MakeFRsBitfield_HeroInputFlags(void* Flags);
    bool IsHeroStateModifierValid(_Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, void* navState);
    bool IsGripInputHeld(_Script_RsGameTechRT::RsHero* RsHero);
    bool IsGamepadCameraYAxisInverted(_Script_CoreUObject::Object* WorldContextObject);
    bool IgnoreGripInputRequirement();
    void BreakFRsBitfield_HeroUpgradeFlags(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags& UpgradeFlags, void*& Flags);
    void BreakFRsBitfield_HeroLoadoutFlags(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags& LoadoutFlags, void*& Flags);
}; // Size: 0x28
#pragma pack(pop)
}
