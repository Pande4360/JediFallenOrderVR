#include "..\FUObjectArray.hpp"
#include "notify_SetInvulnerable_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_SetInvulnerable::notify_SetInvulnerable_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_SetInvulnerable::notify_SetInvulnerable_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_SetInvulnerable.notify_SetInvulnerable_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_SetInvulnerable::notify_SetInvulnerable_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
