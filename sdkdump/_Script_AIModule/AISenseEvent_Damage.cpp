#include "..\FUObjectArray.hpp"
#include "AISenseEvent.hpp"
#include "AISenseEvent_Damage.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::AISenseEvent_Damage::get_Event() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AIModule::AISenseEvent_Damage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISenseEvent_Damage");
    return result;
}
