#include "..\FUObjectArray.hpp"
#include "AISense.hpp"
#include "AISense_Damage.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
void* _Script_AIModule::AISense_Damage::get_RegisteredEvents() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_AIModule::AISense_Damage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISense_Damage");
    return result;
}
void _Script_AIModule::AISense_Damage::ReportDamageEvent(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* Instigator, float DamageAmount, _Script_CoreUObject::Vector EventLocation, _Script_CoreUObject::Vector HitLocation) {
    return;
}
