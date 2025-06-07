#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "RsAnimNotify_TriggerAbility.hpp"
void* _Script_SwGame::RsAnimNotify_TriggerAbility::get_AbilityType() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAnimNotify_TriggerAbility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAnimNotify_TriggerAbility");
    return result;
}
bool _Script_SwGame::RsAnimNotify_TriggerAbility::get_bShouldUseHighestAcquiredUpgrade() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_SwGame::RsAnimNotify_TriggerAbility::set_bShouldUseHighestAcquiredUpgrade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::RsAnimNotify_TriggerAbility::get_UpgradeLevel() {
    return (void*)((uintptr_t)this + 0x41);
}
