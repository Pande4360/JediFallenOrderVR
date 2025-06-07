#include "..\FUObjectArray.hpp"
#include "notify_DisableRootMotion_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
float& _Game_GlobalData_AnimNotifies_notify_DisableRootMotion::notify_DisableRootMotion_C::get_DisableRootMotionDistance() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Game_GlobalData_AnimNotifies_notify_DisableRootMotion::notify_DisableRootMotion_C::get_UseDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
bool _Game_GlobalData_AnimNotifies_notify_DisableRootMotion::notify_DisableRootMotion_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
void _Game_GlobalData_AnimNotifies_notify_DisableRootMotion::notify_DisableRootMotion_C::set_UseDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimNotifies_notify_DisableRootMotion::notify_DisableRootMotion_C::Received_NotifyTick0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime) {
    return;
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_DisableRootMotion::notify_DisableRootMotion_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_DisableRootMotion.notify_DisableRootMotion_C");
    return result;
}
