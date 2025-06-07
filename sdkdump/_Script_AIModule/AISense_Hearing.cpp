#include "..\FUObjectArray.hpp"
#include "AISense.hpp"
#include "AISense_Hearing.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_CoreUObject::Class* _Script_AIModule::AISense_Hearing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISense_Hearing");
    return result;
}
void* _Script_AIModule::AISense_Hearing::get_NoiseEvents() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_AIModule::AISense_Hearing::get_SpeedOfSoundSq() {
    return *(float*)((uintptr_t)this + 0x98);
}
void _Script_AIModule::AISense_Hearing::ReportNoiseEvent(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector NoiseLocation, float Loudness, _Script_Engine::Actor* Instigator, float MaxRange, void* Tag) {
    return;
}
