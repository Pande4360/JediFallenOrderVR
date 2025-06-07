#include "..\FUObjectArray.hpp"
#include "notify_AI_CombatAim_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalTargetAnimNotifyState.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::get_CombatAim() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void* _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::get_motionParmAim() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::set_CombatAim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::get_AimWhileInForceSlowdown() {
    return (*(uint8_t*)((uintptr_t)this + 0xc9 + 0)) & 1 != 0;
}
void* _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::get_motionParmNoAim() {
    return (void*)((uintptr_t)this + 0xd0);
}
void _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::set_AimWhileInForceSlowdown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::get_AimSpeed() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::get_DontTrackIfEvading() {
    return (*(uint8_t*)((uintptr_t)this + 0xd9 + 0)) & 1 != 0;
}
void _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::set_DontTrackIfEvading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::get_AimOffSet() {
    return *(float*)((uintptr_t)this + 0xdc);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_AI_CombatAim.notify_AI_CombatAim_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::Received_NotifyTick(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime) {
    return;
}
bool _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
bool _Game_GlobalData_AnimNotifies_notify_AI_CombatAim::notify_AI_CombatAim_C::Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
