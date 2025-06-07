#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsClimbSettings.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "SwClimbSettings.hpp"
void* _Script_SwGame::SwClimbSettings::get_ClimbingClawsJumpStaminaMeterRow() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::SwClimbSettings::get_PauseStaminaRegenHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x370);
}
float& _Script_SwGame::SwClimbSettings::get_MovementStaminaUsagePerMeter() {
    return *(float*)((uintptr_t)this + 0x378);
}
float& _Script_SwGame::SwClimbSettings::get_ClimbingClawsMovementStaminaUsagePerMeter() {
    return *(float*)((uintptr_t)this + 0x37c);
}
float& _Script_SwGame::SwClimbSettings::get_MovementShadowTime() {
    return *(float*)((uintptr_t)this + 0x380);
}
_Script_CoreUObject::Class* _Script_SwGame::SwClimbSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwClimbSettings");
    return result;
}
void* _Script_SwGame::SwClimbSettings::get_JumpStaminaMeterRow() {
    return (void*)((uintptr_t)this + 0x388);
}
