#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineServiceAuthDeny.hpp"
void* _Script_EngineMessages::EngineServiceAuthDeny::get_UserName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EngineMessages::EngineServiceAuthDeny::get_UserToDeny() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_EngineMessages::EngineServiceAuthDeny::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EngineMessages.EngineServiceAuthDeny");
    return result;
}
