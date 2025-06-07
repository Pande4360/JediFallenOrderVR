#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_PlayAnimationBase.hpp"
#include "RsCharacter.hpp"
void* _Script_RsGameTechRT::RsBTTask_PlayAnimationBase::get_BlendspaceInputSource() {
    return (void*)((uintptr_t)this + 0x84);
}
void _Script_RsGameTechRT::RsBTTask_PlayAnimationBase::set_bMaintainCharacterMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x87 + 0);
    *(uint8_t*)((uintptr_t)this + 0x87 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsBTTask_PlayAnimationBase::set_bLockCurrentGoal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsBTTask_PlayAnimationBase::get_bLockCurrentGoal() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsBTTask_PlayAnimationBase::get_bLockCurrentTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x86 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTTask_PlayAnimationBase::set_bLockCurrentTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x86 + 0);
    *(uint8_t*)((uintptr_t)this + 0x86 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsBTTask_PlayAnimationBase::get_bMaintainCharacterMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x87 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_PlayAnimationBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_PlayAnimationBase");
    return result;
}
void _Script_RsGameTechRT::RsBTTask_PlayAnimationBase::OnCombatStateChange(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState) {
    return;
}
