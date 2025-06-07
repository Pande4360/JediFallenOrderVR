#include "..\FUObjectArray.hpp"
#include "AISenseConfig.hpp"
#include "AISenseConfig_Damage.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::AISenseConfig_Damage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISenseConfig_Damage");
    return result;
}
void* _Script_AIModule::AISenseConfig_Damage::get_Implementation() {
    return (void*)((uintptr_t)this + 0x48);
}
