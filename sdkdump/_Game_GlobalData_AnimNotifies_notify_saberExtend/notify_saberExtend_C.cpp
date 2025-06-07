#include "..\FUObjectArray.hpp"
#include "notify_saberExtend_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::set_Reverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::get_Reverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
bool _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::get_hero_requireHostileTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
bool _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::get_use_notifyEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void* _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::get_hero_requiredAbility() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::set_use_notifyEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
void _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::set_hero_requireHostileTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::get_hero_requireRHandAttachToExtend() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::set_hero_requireRHandAttachToExtend(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_saberExtend.notify_saberExtend_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_saberExtend::notify_saberExtend_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
