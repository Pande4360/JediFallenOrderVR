#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RadialDamageParams.hpp"
float& _Script_Engine::RadialDamageParams::get_DamageFalloff() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::RadialDamageParams::get_BaseDamage() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::RadialDamageParams::get_MinimumDamage() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::RadialDamageParams::get_InnerRadius() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RadialDamageParams::get_OuterRadius() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::RadialDamageParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RadialDamageParams");
    return result;
}
