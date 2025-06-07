#include "..\FUObjectArray.hpp"
#include "DISABLED_notify_PauseForceMeterRegen_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_DISABLED_notify_PauseForceMeterRegen::DISABLED_notify_PauseForceMeterRegen_C::get_PauseOnlyEmptyMeter() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
bool _Game_GlobalData_AnimNotifies_DISABLED_notify_PauseForceMeterRegen::DISABLED_notify_PauseForceMeterRegen_C::Received_NotifyTick0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float FrameDeltaTime) {
    return;
}
void _Game_GlobalData_AnimNotifies_DISABLED_notify_PauseForceMeterRegen::DISABLED_notify_PauseForceMeterRegen_C::set_PauseOnlyEmptyMeter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_DISABLED_notify_PauseForceMeterRegen::DISABLED_notify_PauseForceMeterRegen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/DISABLED_notify_PauseForceMeterRegen.DISABLED_notify_PauseForceMeterRegen_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_DISABLED_notify_PauseForceMeterRegen::DISABLED_notify_PauseForceMeterRegen_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
bool _Game_GlobalData_AnimNotifies_DISABLED_notify_PauseForceMeterRegen::DISABLED_notify_PauseForceMeterRegen_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
