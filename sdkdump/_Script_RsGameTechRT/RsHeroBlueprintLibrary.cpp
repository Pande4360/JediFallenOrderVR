#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "RsBitfield_HeroInputFlags.hpp"
#include "RsBitfield_HeroLoadoutFlags.hpp"
#include "RsBitfield_HeroUpgradeFlags.hpp"
#include "RsBitfield_NavState.hpp"
#include "RsHero.hpp"
#include "RsHeroBlueprintLibrary.hpp"
#include "RsHeroStateModifierDefinition.hpp"
bool _Script_RsGameTechRT::RsHeroBlueprintLibrary::IsHeroStateModifierValid(_Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, void* navState) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsHeroBlueprintLibrary");
    return result;
}
void _Script_RsGameTechRT::RsHeroBlueprintLibrary::SetGamepadCameraYAxisInverted(_Script_CoreUObject::Object* WorldContextObject, bool bInvert) {
    return;
}
_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags _Script_RsGameTechRT::RsHeroBlueprintLibrary::MakeFRsBitfield_HeroUpgradeFlags(void* Flags) {
    return;
}
_Script_RsGameTechRT::RsBitfield_NavState _Script_RsGameTechRT::RsHeroBlueprintLibrary::MakeFRsBitfield_NavState(void* Flags) {
    return;
}
_Script_RsGameTechRT::RsBitfield_HeroInputFlags _Script_RsGameTechRT::RsHeroBlueprintLibrary::MakeFRsBitfield_HeroInputFlags(void* Flags) {
    return;
}
_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags _Script_RsGameTechRT::RsHeroBlueprintLibrary::MakeFRsBitfield_HeroLoadoutFlags(void* Flags) {
    return;
}
bool _Script_RsGameTechRT::RsHeroBlueprintLibrary::IsGripInputHeld(_Script_RsGameTechRT::RsHero* RsHero) {
    return;
}
bool _Script_RsGameTechRT::RsHeroBlueprintLibrary::IsGamepadCameraYAxisInverted(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_RsGameTechRT::RsHeroBlueprintLibrary::IgnoreGripInputRequirement() {
    return;
}
void _Script_RsGameTechRT::RsHeroBlueprintLibrary::BreakFRsBitfield_HeroUpgradeFlags(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags& UpgradeFlags, void*& Flags) {
    return;
}
void _Script_RsGameTechRT::RsHeroBlueprintLibrary::BreakFRsBitfield_HeroLoadoutFlags(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags& LoadoutFlags, void*& Flags) {
    return;
}
