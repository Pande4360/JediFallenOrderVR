#include "..\FUObjectArray.hpp"
#include "GenericTeamId.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::GenericTeamId::get_TeamID() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AIModule::GenericTeamId::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.GenericTeamId");
    return result;
}
