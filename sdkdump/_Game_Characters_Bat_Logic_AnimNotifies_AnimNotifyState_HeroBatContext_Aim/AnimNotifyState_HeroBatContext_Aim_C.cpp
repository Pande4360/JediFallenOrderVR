#include "..\FUObjectArray.hpp"
#include "AnimNotifyState_HeroBatContext_Aim_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_Characters_Bat_Logic_AnimNotifies_AnimNotifyState_HeroBatContext_Aim::AnimNotifyState_HeroBatContext_Aim_C::get_MotionParm() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Game_Characters_Bat_Logic_AnimNotifies_AnimNotifyState_HeroBatContext_Aim::AnimNotifyState_HeroBatContext_Aim_C::Received_NotifyTick0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Bat_Logic_AnimNotifies_AnimNotifyState_HeroBatContext_Aim::AnimNotifyState_HeroBatContext_Aim_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Bat/Logic/AnimNotifies/AnimNotifyState_HeroBatContext_Aim.AnimNotifyState_HeroBatContext_Aim_C");
    return result;
}
bool _Game_Characters_Bat_Logic_AnimNotifies_AnimNotifyState_HeroBatContext_Aim::AnimNotifyState_HeroBatContext_Aim_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
bool _Game_Characters_Bat_Logic_AnimNotifies_AnimNotifyState_HeroBatContext_Aim::AnimNotifyState_HeroBatContext_Aim_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
