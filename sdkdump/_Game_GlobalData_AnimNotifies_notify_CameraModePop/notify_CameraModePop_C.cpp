#include "..\FUObjectArray.hpp"
#include "notify_CameraModePop_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
float& _Game_GlobalData_AnimNotifies_notify_CameraModePop::notify_CameraModePop_C::get_BlendTimeOverride() {
    return *(float*)((uintptr_t)this + 0x40);
}
void* _Game_GlobalData_AnimNotifies_notify_CameraModePop::notify_CameraModePop_C::get_ModeName() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Game_GlobalData_AnimNotifies_notify_CameraModePop::notify_CameraModePop_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/AnimNotifies/notify_CameraModePop.notify_CameraModePop_C");
    return result;
}
bool _Game_GlobalData_AnimNotifies_notify_CameraModePop::notify_CameraModePop_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
