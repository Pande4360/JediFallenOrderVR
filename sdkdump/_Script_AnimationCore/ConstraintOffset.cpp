#include "..\FUObjectArray.hpp"
#include "ConstraintOffset.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::ConstraintOffset::get_Translation() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimationCore::ConstraintOffset::get_Rotation() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimationCore::ConstraintOffset::get_Scale() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AnimationCore::ConstraintOffset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.ConstraintOffset");
    return result;
}
void* _Script_AnimationCore::ConstraintOffset::get_Parent() {
    return (void*)((uintptr_t)this + 0x30);
}
