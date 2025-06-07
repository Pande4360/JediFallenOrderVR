#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineServiceAuthGrant.hpp"
void* _Script_EngineMessages::EngineServiceAuthGrant::get_UserName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_EngineMessages::EngineServiceAuthGrant::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EngineMessages.EngineServiceAuthGrant");
    return result;
}
void* _Script_EngineMessages::EngineServiceAuthGrant::get_UserToGrant() {
    return (void*)((uintptr_t)this + 0x10);
}
