#include "..\FUObjectArray.hpp"
#include "ConstraintDescriptionEx.hpp"
#include "TransformConstraintDescription.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::TransformConstraintDescription::get_TransformType() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_AnimationCore::TransformConstraintDescription::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.TransformConstraintDescription");
    return result;
}
