#include "..\FUObjectArray.hpp"
#include "notify_SetAnimRate_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_SetAnimRate::notify_SetAnimRate_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
float& _Game_GlobalData_AnimNotifies_notify_SetAnimRate::notify_SetAnimRate_C::get_AnimPlayRate() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_SetAnimRate::notify_SetAnimRate_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_SetAnimRate.notify_SetAnimRate_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_SetAnimRate::notify_SetAnimRate_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
