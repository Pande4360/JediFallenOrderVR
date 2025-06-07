#include "..\FUObjectArray.hpp"
#include "PoseDriverTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::PoseDriverTransform::get_TargetTranslation() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::PoseDriverTransform::get_TargetRotation() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::PoseDriverTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.PoseDriverTransform");
    return result;
}
