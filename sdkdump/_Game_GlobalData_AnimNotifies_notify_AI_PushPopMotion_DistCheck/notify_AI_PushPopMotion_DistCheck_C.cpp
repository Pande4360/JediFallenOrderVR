#include "..\FUObjectArray.hpp"
#include "notify_AI_PushPopMotion_DistCheck_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
float& _Game_GlobalData_AnimNotifies_notify_AI_PushPopMotion_DistCheck::notify_AI_PushPopMotion_DistCheck_C::get_ParmDistance() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Game_GlobalData_AnimNotifies_notify_AI_PushPopMotion_DistCheck::notify_AI_PushPopMotion_DistCheck_C::get_Comparison() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Game_GlobalData_AnimNotifies_notify_AI_PushPopMotion_DistCheck::notify_AI_PushPopMotion_DistCheck_C::get_RemoveOnCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void* _Game_GlobalData_AnimNotifies_notify_AI_PushPopMotion_DistCheck::notify_AI_PushPopMotion_DistCheck_C::get_MotionParmPush() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Game_GlobalData_AnimNotifies_notify_AI_PushPopMotion_DistCheck::notify_AI_PushPopMotion_DistCheck_C::set_RemoveOnCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_AI_PushPopMotion_DistCheck::notify_AI_PushPopMotion_DistCheck_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_AI_PushPopMotion_DistCheck.notify_AI_PushPopMotion_DistCheck_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_AI_PushPopMotion_DistCheck::notify_AI_PushPopMotion_DistCheck_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
bool _Game_GlobalData_AnimNotifies_notify_AI_PushPopMotion_DistCheck::notify_AI_PushPopMotion_DistCheck_C::Received_NotifyTick0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime) {
    return;
}
