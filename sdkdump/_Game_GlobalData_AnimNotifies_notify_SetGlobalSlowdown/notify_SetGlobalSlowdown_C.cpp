#include "..\FUObjectArray.hpp"
#include "notify_SetGlobalSlowdown_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotifyState.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
bool _Game_GlobalData_AnimNotifies_notify_SetGlobalSlowdown::notify_SetGlobalSlowdown_C::Received_NotifyBegin(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
float& _Game_GlobalData_AnimNotifies_notify_SetGlobalSlowdown::notify_SetGlobalSlowdown_C::get_slowdownAmount() {
    return *(float*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_SetGlobalSlowdown::notify_SetGlobalSlowdown_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_SetGlobalSlowdown.notify_SetGlobalSlowdown_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_SetGlobalSlowdown::notify_SetGlobalSlowdown_C::Received_NotifyEnd(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
