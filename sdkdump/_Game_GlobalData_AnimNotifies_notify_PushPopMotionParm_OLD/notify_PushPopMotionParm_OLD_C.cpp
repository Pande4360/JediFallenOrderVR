#include "..\FUObjectArray.hpp"
#include "notify_PushPopMotionParm_OLD_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_PushPopMotionParm_OLD::notify_PushPopMotionParm_OLD_C::get_AllowAI_Orientation() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Game_GlobalData_AnimNotifies_notify_PushPopMotionParm_OLD::notify_PushPopMotionParm_OLD_C::get_MotionParm() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Game_GlobalData_AnimNotifies_notify_PushPopMotionParm_OLD::notify_PushPopMotionParm_OLD_C::set_AllowAI_Orientation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_PushPopMotionParm_OLD::notify_PushPopMotionParm_OLD_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_PushPopMotionParm_OLD.notify_PushPopMotionParm_OLD_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_PushPopMotionParm_OLD::notify_PushPopMotionParm_OLD_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
bool _Game_GlobalData_AnimNotifies_notify_PushPopMotionParm_OLD::notify_PushPopMotionParm_OLD_C::Received_NotifyTick0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime) {
    return;
}
bool _Game_GlobalData_AnimNotifies_notify_PushPopMotionParm_OLD::notify_PushPopMotionParm_OLD_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
