#include "..\FUObjectArray.hpp"
#include "notify_AI_SetAbilityOverride_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_GlobalData_AnimNotifies_notify_AI_SetAbilityOverride::notify_AI_SetAbilityOverride_C::get_abilityOverride() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_AI_SetAbilityOverride::notify_AI_SetAbilityOverride_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_AI_SetAbilityOverride.notify_AI_SetAbilityOverride_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_AI_SetAbilityOverride::notify_AI_SetAbilityOverride_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
bool _Game_GlobalData_AnimNotifies_notify_AI_SetAbilityOverride::notify_AI_SetAbilityOverride_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
