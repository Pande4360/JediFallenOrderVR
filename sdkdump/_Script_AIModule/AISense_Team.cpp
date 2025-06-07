#include "..\FUObjectArray.hpp"
#include "AISense.hpp"
#include "AISense_Team.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::AISense_Team::get_RegisteredEvents() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_AIModule::AISense_Team::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISense_Team");
    return result;
}
