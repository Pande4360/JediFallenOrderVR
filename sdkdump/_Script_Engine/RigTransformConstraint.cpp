#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigTransformConstraint.hpp"
_Script_CoreUObject::Class* _Script_Engine::RigTransformConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RigTransformConstraint");
    return result;
}
void* _Script_Engine::RigTransformConstraint::get_TranformType() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RigTransformConstraint::get_ParentSpace() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RigTransformConstraint::get_Weight() {
    return *(float*)((uintptr_t)this + 0x10);
}
