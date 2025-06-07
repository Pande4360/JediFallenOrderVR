#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DamageEvent.hpp"
#include "PointDamageEvent.hpp"
float& _Script_Engine::PointDamageEvent::get_Damage() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::PointDamageEvent::get_ShotDirection() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::PointDamageEvent::get_HitInfo() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::PointDamageEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PointDamageEvent");
    return result;
}
