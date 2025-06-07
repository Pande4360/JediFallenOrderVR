#include "..\FUObjectArray.hpp"
#include "AngularRangeLimit.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AngularRangeLimit::get_LimitMin() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimGraphRuntime::AngularRangeLimit::get_LimitMax() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_AnimGraphRuntime::AngularRangeLimit::get_Bone() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AngularRangeLimit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AngularRangeLimit");
    return result;
}
