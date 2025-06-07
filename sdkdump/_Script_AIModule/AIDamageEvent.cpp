#include "..\FUObjectArray.hpp"
#include "AIDamageEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
float& _Script_AIModule::AIDamageEvent::get_Amount() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_AIModule::AIDamageEvent::get_Location() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_Engine::Actor*& _Script_AIModule::AIDamageEvent::get_DamagedActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x20);
}
void* _Script_AIModule::AIDamageEvent::get_HitLocation() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::Actor*& _Script_AIModule::AIDamageEvent::get_Instigator() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AIModule::AIDamageEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIDamageEvent");
    return result;
}
