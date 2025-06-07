#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "RsAnimNotifyState_CameraRotationMethod.hpp"
void* _Script_RsGameTechRT::RsAnimNotifyState_CameraRotationMethod::get_NotifyViewTargetRotationUpdateMethod() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsAnimNotifyState_CameraRotationMethod::get_NotifyModeName() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_CameraRotationMethod::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_CameraRotationMethod");
    return result;
}
