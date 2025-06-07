#include "..\FUObjectArray.hpp"
#include "notify_Hero_Sheathing_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_Hero_Sheathing::notify_Hero_Sheathing_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_Hero_Sheathing.notify_Hero_Sheathing_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_Hero_Sheathing::notify_Hero_Sheathing_C::get_requireHostileTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
bool _Game_GlobalData_AnimNotifies_notify_Hero_Sheathing::notify_Hero_Sheathing_C::get_Unsheathe() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Game_GlobalData_AnimNotifies_notify_Hero_Sheathing::notify_Hero_Sheathing_C::set_Unsheathe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_GlobalData_AnimNotifies_notify_Hero_Sheathing::notify_Hero_Sheathing_C::set_requireHostileTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimNotifies_notify_Hero_Sheathing::notify_Hero_Sheathing_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
void* _Game_GlobalData_AnimNotifies_notify_Hero_Sheathing::notify_Hero_Sheathing_C::get_requiredAbility() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Game_GlobalData_AnimNotifies_notify_Hero_Sheathing::notify_Hero_Sheathing_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
