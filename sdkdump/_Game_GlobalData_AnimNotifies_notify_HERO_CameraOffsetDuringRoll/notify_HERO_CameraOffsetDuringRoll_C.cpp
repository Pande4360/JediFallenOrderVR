#include "..\FUObjectArray.hpp"
#include "notify_HERO_CameraOffsetDuringRoll_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalTargetAnimNotifyState.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_HERO_CameraOffsetDuringRoll::notify_HERO_CameraOffsetDuringRoll_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_HERO_CameraOffsetDuringRoll.notify_HERO_CameraOffsetDuringRoll_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_HERO_CameraOffsetDuringRoll::notify_HERO_CameraOffsetDuringRoll_C::Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
bool _Game_GlobalData_AnimNotifies_notify_HERO_CameraOffsetDuringRoll::notify_HERO_CameraOffsetDuringRoll_C::Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
