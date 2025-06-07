#include "..\FUObjectArray.hpp"
#include "notify_HERO_ConsumeForceOverTime_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_HERO_ConsumeForceOverTime::notify_HERO_ConsumeForceOverTime_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
void* _Game_GlobalData_AnimNotifies_notify_HERO_ConsumeForceOverTime::notify_HERO_ConsumeForceOverTime_C::get_ForceMeterRow() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_HERO_ConsumeForceOverTime::notify_HERO_ConsumeForceOverTime_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_HERO_ConsumeForceOverTime.notify_HERO_ConsumeForceOverTime_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_HERO_ConsumeForceOverTime::notify_HERO_ConsumeForceOverTime_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
