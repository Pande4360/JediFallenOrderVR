#include "..\FUObjectArray.hpp"
#include "notify_HERO_durationFlags_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_GlobalData_AnimNotifies_notify_HERO_durationFlags::notify_HERO_durationFlags_C::get_FlagsDuration() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Game_GlobalData_AnimNotifies_notify_HERO_durationFlags::notify_HERO_durationFlags_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
void* _Game_GlobalData_AnimNotifies_notify_HERO_durationFlags::notify_HERO_durationFlags_C::get_iFlagsDuration() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Game_GlobalData_AnimNotifies_notify_HERO_durationFlags::notify_HERO_durationFlags_C::get_parmName() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_HERO_durationFlags::notify_HERO_durationFlags_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_HERO_durationFlags.notify_HERO_durationFlags_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_HERO_durationFlags::notify_HERO_durationFlags_C::Received_NotifyTick0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime) {
    return;
}
