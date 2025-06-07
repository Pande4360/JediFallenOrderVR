#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsActorLedgeSettings.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "SwActorLedgeSettings.hpp"
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::SwActorLedgeSettings::get_PauseStaminaRegenHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x490);
}
float& _Script_SwGame::SwActorLedgeSettings::get_ShimmyMovementStaminaUsagePerMeter() {
    return *(float*)((uintptr_t)this + 0x498);
}
void* _Script_SwGame::SwActorLedgeSettings::get_LedgeJumpStaminaMeterRow() {
    return (void*)((uintptr_t)this + 0x4a0);
}
float& _Script_SwGame::SwActorLedgeSettings::get_ShimmyMovementShadowTime() {
    return *(float*)((uintptr_t)this + 0x49c);
}
_Script_CoreUObject::Class* _Script_SwGame::SwActorLedgeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwActorLedgeSettings");
    return result;
}
