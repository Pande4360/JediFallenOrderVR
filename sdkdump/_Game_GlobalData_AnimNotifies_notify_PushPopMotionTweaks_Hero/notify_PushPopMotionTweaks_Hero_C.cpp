#include "..\FUObjectArray.hpp"
#include "notify_PushPopMotionTweaks_Hero_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_GlobalData_AnimNotifies_notify_PushPopMotionTweaks_Hero::notify_PushPopMotionTweaks_Hero_C::get_MotionTweaks() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_PushPopMotionTweaks_Hero::notify_PushPopMotionTweaks_Hero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_PushPopMotionTweaks_Hero.notify_PushPopMotionTweaks_Hero_C");
    return result;
}
float& _Game_GlobalData_AnimNotifies_notify_PushPopMotionTweaks_Hero::notify_PushPopMotionTweaks_Hero_C::get_blendInAmount() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Game_GlobalData_AnimNotifies_notify_PushPopMotionTweaks_Hero::notify_PushPopMotionTweaks_Hero_C::get_blendOutAmount() {
    return *(float*)((uintptr_t)this + 0x38);
}
bool _Game_GlobalData_AnimNotifies_notify_PushPopMotionTweaks_Hero::notify_PushPopMotionTweaks_Hero_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
bool _Game_GlobalData_AnimNotifies_notify_PushPopMotionTweaks_Hero::notify_PushPopMotionTweaks_Hero_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
