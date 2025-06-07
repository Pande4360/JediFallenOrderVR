#include "..\FUObjectArray.hpp"
#include "AISense.hpp"
#include "AISense_Touch.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::AISense_Touch::get_RegisteredEvents() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_AIModule::AISense_Touch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISense_Touch");
    return result;
}
