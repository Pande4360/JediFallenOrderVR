#include "..\FUObjectArray.hpp"
#include "EulerTransform.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::EulerTransform::get_Rotation() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_AnimationCore::EulerTransform::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AnimationCore::EulerTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.EulerTransform");
    return result;
}
void* _Script_AnimationCore::EulerTransform::get_Scale() {
    return (void*)((uintptr_t)this + 0x18);
}
