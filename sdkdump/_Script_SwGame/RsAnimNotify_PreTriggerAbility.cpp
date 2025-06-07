#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RsAnimNotify_PreTriggerAbility.hpp"
void* _Script_SwGame::RsAnimNotify_PreTriggerAbility::get_AbilityType() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SwGame::RsAnimNotify_PreTriggerAbility::get_UpgradeLevel() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::RsAnimNotify_PreTriggerAbility::get_OverrideAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAnimNotify_PreTriggerAbility::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAnimNotify_PreTriggerAbility");
    return result;
}
