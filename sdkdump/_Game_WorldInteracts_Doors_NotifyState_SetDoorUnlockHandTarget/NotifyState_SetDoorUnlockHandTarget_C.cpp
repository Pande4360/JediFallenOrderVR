#include "..\FUObjectArray.hpp"
#include "NotifyState_SetDoorUnlockHandTarget_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_WorldInteracts_Doors_NotifyState_SetDoorUnlockHandTarget::NotifyState_SetDoorUnlockHandTarget_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Doors/NotifyState_SetDoorUnlockHandTarget.NotifyState_SetDoorUnlockHandTarget_C");
    return result;
}
bool _Game_WorldInteracts_Doors_NotifyState_SetDoorUnlockHandTarget::NotifyState_SetDoorUnlockHandTarget_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
bool _Game_WorldInteracts_Doors_NotifyState_SetDoorUnlockHandTarget::NotifyState_SetDoorUnlockHandTarget_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
