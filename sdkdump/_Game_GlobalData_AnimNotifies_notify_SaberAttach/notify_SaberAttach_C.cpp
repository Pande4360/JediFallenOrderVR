#include "..\FUObjectArray.hpp"
#include "notify_SaberAttach_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_SaberAttach::notify_SaberAttach_C::get_AttachToHip_() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Game_GlobalData_AnimNotifies_notify_SaberAttach::notify_SaberAttach_C::set_AttachToHip_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_SaberAttach::notify_SaberAttach_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_SaberAttach.notify_SaberAttach_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_SaberAttach::notify_SaberAttach_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
