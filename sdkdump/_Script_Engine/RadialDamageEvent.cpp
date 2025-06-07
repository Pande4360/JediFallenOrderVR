#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DamageEvent.hpp"
#include "RadialDamageEvent.hpp"
void* _Script_Engine::RadialDamageEvent::get_origin() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_Engine::RadialDamageEvent::get_Params() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::RadialDamageEvent::get_ComponentHits() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::RadialDamageEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RadialDamageEvent");
    return result;
}
