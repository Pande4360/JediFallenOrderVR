#include "..\FUObjectArray.hpp"
#include "AISenseConfig.hpp"
#include "AISenseConfig_Blueprint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::AISenseConfig_Blueprint::get_Implementation() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_AIModule::AISenseConfig_Blueprint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISenseConfig_Blueprint");
    return result;
}
