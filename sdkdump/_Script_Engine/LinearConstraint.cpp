#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConstraintBaseParams.hpp"
#include "LinearConstraint.hpp"
float& _Script_Engine::LinearConstraint::get_Limit() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Engine::LinearConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LinearConstraint");
    return result;
}
void* _Script_Engine::LinearConstraint::get_XMotion() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::LinearConstraint::get_YMotion() {
    return (void*)((uintptr_t)this + 0x19);
}
void* _Script_Engine::LinearConstraint::get_ZMotion() {
    return (void*)((uintptr_t)this + 0x1a);
}
