#include "..\FUObjectArray.hpp"
#include "Notify_HeroFacialAnimation_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_Engine::AnimSequence*& _Game_GlobalData_AnimNotifies_Notify_HeroFacialAnimation::Notify_HeroFacialAnimation_C::get_HeroAnim() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x30);
}
void* _Game_GlobalData_AnimNotifies_Notify_HeroFacialAnimation::Notify_HeroFacialAnimation_C::get_Slot_Name() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_Notify_HeroFacialAnimation::Notify_HeroFacialAnimation_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/Notify_HeroFacialAnimation.Notify_HeroFacialAnimation_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_Notify_HeroFacialAnimation::Notify_HeroFacialAnimation_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
bool _Game_GlobalData_AnimNotifies_Notify_HeroFacialAnimation::Notify_HeroFacialAnimation_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
