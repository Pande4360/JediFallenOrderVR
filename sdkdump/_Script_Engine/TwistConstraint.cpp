#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConstraintBaseParams.hpp"
#include "TwistConstraint.hpp"
float& _Script_Engine::TwistConstraint::get_TwistLimitDegrees() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::TwistConstraint::get_TwistMotion() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::TwistConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TwistConstraint");
    return result;
}
