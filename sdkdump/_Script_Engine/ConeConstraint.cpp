#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConeConstraint.hpp"
#include "ConstraintBaseParams.hpp"
float& _Script_Engine::ConeConstraint::get_Swing1LimitDegrees() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::ConeConstraint::get_Swing2LimitDegrees() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::ConeConstraint::get_Swing1Motion() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::ConeConstraint::get_Swing2Motion() {
    return (void*)((uintptr_t)this + 0x1d);
}
_Script_CoreUObject::Class* _Script_Engine::ConeConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ConeConstraint");
    return result;
}
