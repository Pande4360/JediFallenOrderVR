#include "..\FUObjectArray.hpp"
#include "notify_DisableTargetable_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_DisableTargetable::notify_DisableTargetable_C::get_DisableZTargeting() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
bool _Game_GlobalData_AnimNotifies_notify_DisableTargetable::notify_DisableTargetable_C::get_popzTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
void _Game_GlobalData_AnimNotifies_notify_DisableTargetable::notify_DisableTargetable_C::set_DisableZTargeting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_GlobalData_AnimNotifies_notify_DisableTargetable::notify_DisableTargetable_C::set_popzTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimNotifies_notify_DisableTargetable::notify_DisableTargetable_C::get_DisableAITargeting() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Game_GlobalData_AnimNotifies_notify_DisableTargetable::notify_DisableTargetable_C::set_DisableAITargeting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_DisableTargetable::notify_DisableTargetable_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_DisableTargetable.notify_DisableTargetable_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_DisableTargetable::notify_DisableTargetable_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
bool _Game_GlobalData_AnimNotifies_notify_DisableTargetable::notify_DisableTargetable_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
