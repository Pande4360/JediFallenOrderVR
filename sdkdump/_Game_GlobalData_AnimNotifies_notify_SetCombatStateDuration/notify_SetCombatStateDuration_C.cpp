#include "..\FUObjectArray.hpp"
#include "notify_SetCombatStateDuration_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_GlobalData_AnimNotifies_notify_SetCombatStateDuration::notify_SetCombatStateDuration_C::get_AI_CombatStates() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Game_GlobalData_AnimNotifies_notify_SetCombatStateDuration::notify_SetCombatStateDuration_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
void* _Game_GlobalData_AnimNotifies_notify_SetCombatStateDuration::notify_SetCombatStateDuration_C::get_Ending_AI_CombatState() {
    return (void*)((uintptr_t)this + 0x31);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_SetCombatStateDuration::notify_SetCombatStateDuration_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_SetCombatStateDuration.notify_SetCombatStateDuration_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_SetCombatStateDuration::notify_SetCombatStateDuration_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
