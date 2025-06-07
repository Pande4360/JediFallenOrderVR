#include "..\FUObjectArray.hpp"
#include "notify_AddForceFeedback_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\ForceFeedbackEffect.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_Engine::ForceFeedbackEffect*& _Game_GlobalData_AnimNotifies_notify_AddForceFeedback::notify_AddForceFeedback_C::get_forceFeedback() {
    return *(_Script_Engine::ForceFeedbackEffect**)((uintptr_t)this + 0x38);
}
bool _Game_GlobalData_AnimNotifies_notify_AddForceFeedback::notify_AddForceFeedback_C::get_Looping() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_AddForceFeedback::notify_AddForceFeedback_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_AddForceFeedback.notify_AddForceFeedback_C");
    return result;
}
void _Game_GlobalData_AnimNotifies_notify_AddForceFeedback::notify_AddForceFeedback_C::set_Looping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_AnimNotifies_notify_AddForceFeedback::notify_AddForceFeedback_C::get_ignoreTimeDilation() {
    return (*(uint8_t*)((uintptr_t)this + 0x41 + 0)) & 1 != 0;
}
void _Game_GlobalData_AnimNotifies_notify_AddForceFeedback::notify_AddForceFeedback_C::set_ignoreTimeDilation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41 + 0);
    *(uint8_t*)((uintptr_t)this + 0x41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_GlobalData_AnimNotifies_notify_AddForceFeedback::notify_AddForceFeedback_C::get_Tag() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Game_GlobalData_AnimNotifies_notify_AddForceFeedback::notify_AddForceFeedback_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
