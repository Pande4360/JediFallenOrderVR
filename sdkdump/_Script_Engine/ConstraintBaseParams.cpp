#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConstraintBaseParams.hpp"
float& _Script_Engine::ConstraintBaseParams::get_ContactDistance() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::ConstraintBaseParams::get_Stiffness() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::ConstraintBaseParams::get_Damping() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::ConstraintBaseParams::get_Restitution() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::ConstraintBaseParams::get_bSoftConstraint() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::ConstraintBaseParams::set_bSoftConstraint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ConstraintBaseParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ConstraintBaseParams");
    return result;
}
