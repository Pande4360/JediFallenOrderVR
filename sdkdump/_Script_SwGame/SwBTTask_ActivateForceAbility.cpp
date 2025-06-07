#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "SwBTTask_ActivateForceAbility.hpp"
void* _Script_SwGame::SwBTTask_ActivateForceAbility::get_AbilityTypeToActivate() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_SwGame::SwBTTask_ActivateForceAbility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTTask_ActivateForceAbility");
    return result;
}
void* _Script_SwGame::SwBTTask_ActivateForceAbility::get_UpgradeLevel() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwBTTask_ActivateForceAbility::get_OverrideAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x80);
}
void _Script_SwGame::SwBTTask_ActivateForceAbility::set_bMaintainCharacterMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwBTTask_ActivateForceAbility::get_bMaintainCharacterMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
