#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "RsAbility.hpp"
void* _Script_SwGame::RsAbility::get_DefaultAbilityState() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::RsAbility::get_HeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::RsAbility::get_TimeToAllowReactivation() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbility");
    return result;
}
void* _Script_SwGame::RsAbility::get_AbilityType() {
    return (void*)((uintptr_t)this + 0x78);
}
