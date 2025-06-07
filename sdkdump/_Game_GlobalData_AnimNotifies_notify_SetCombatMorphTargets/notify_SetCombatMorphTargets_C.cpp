#include "..\FUObjectArray.hpp"
#include "notify_SetCombatMorphTargets_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_SetCombatMorphTargets::notify_SetCombatMorphTargets_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_SetCombatMorphTargets.notify_SetCombatMorphTargets_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_SetCombatMorphTargets::notify_SetCombatMorphTargets_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
bool _Game_GlobalData_AnimNotifies_notify_SetCombatMorphTargets::notify_SetCombatMorphTargets_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
