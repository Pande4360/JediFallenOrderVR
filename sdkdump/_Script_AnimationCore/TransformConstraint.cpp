#include "..\FUObjectArray.hpp"
#include "TransformConstraint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::TransformConstraint::get_Operator() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimationCore::TransformConstraint::get_SourceNode() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimationCore::TransformConstraint::get_TargetNode() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_AnimationCore::TransformConstraint::get_Weight() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_AnimationCore::TransformConstraint::get_bMaintainOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_AnimationCore::TransformConstraint::set_bMaintainOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimationCore::TransformConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.TransformConstraint");
    return result;
}
