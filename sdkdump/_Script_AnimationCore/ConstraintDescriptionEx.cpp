#include "..\FUObjectArray.hpp"
#include "ConstraintDescriptionEx.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AnimationCore::ConstraintDescriptionEx::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.ConstraintDescriptionEx");
    return result;
}
void* _Script_AnimationCore::ConstraintDescriptionEx::get_AxesFilterOption() {
    return (void*)((uintptr_t)this + 0x8);
}
