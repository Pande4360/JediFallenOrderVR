#include "..\FUObjectArray.hpp"
#include "RotationLimit.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::RotationLimit::get_LimitMin() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::RotationLimit::get_LimitMax() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::RotationLimit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.RotationLimit");
    return result;
}
