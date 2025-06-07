#include "..\FUObjectArray.hpp"
#include "notify_CameraModePush_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalTargetAnimNotifyState.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_CameraModePush::notify_CameraModePush_C::get_requireHeroZTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void* _Game_GlobalData_AnimNotifies_notify_CameraModePush::notify_CameraModePush_C::get_ModeName() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Game_GlobalData_AnimNotifies_notify_CameraModePush::notify_CameraModePush_C::get_BlendTimeOverride() {
    return *(float*)((uintptr_t)this + 0xc8);
}
float& _Game_GlobalData_AnimNotifies_notify_CameraModePush::notify_CameraModePush_C::get_BlendOutTimeOverride() {
    return *(float*)((uintptr_t)this + 0xcc);
}
void _Game_GlobalData_AnimNotifies_notify_CameraModePush::notify_CameraModePush_C::set_requireHeroZTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimNotifies_notify_CameraModePush::notify_CameraModePush_C::Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_CameraModePush::notify_CameraModePush_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_CameraModePush.notify_CameraModePush_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_CameraModePush::notify_CameraModePush_C::Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
