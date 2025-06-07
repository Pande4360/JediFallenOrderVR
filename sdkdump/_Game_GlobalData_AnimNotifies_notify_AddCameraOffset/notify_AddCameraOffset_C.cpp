#include "..\FUObjectArray.hpp"
#include "notify_AddCameraOffset_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalTargetAnimNotifyState.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_AddCameraOffset::notify_AddCameraOffset_C::Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
void* _Game_GlobalData_AnimNotifies_notify_AddCameraOffset::notify_AddCameraOffset_C::get_LocationOffset() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Game_GlobalData_AnimNotifies_notify_AddCameraOffset::notify_AddCameraOffset_C::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0xdc);
}
void* _Game_GlobalData_AnimNotifies_notify_AddCameraOffset::notify_AddCameraOffset_C::get_RotationOffset() {
    return (void*)((uintptr_t)this + 0xcc);
}
float& _Game_GlobalData_AnimNotifies_notify_AddCameraOffset::notify_AddCameraOffset_C::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_AddCameraOffset::notify_AddCameraOffset_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_AddCameraOffset.notify_AddCameraOffset_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_AddCameraOffset::notify_AddCameraOffset_C::Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
