#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SessionServicePing.hpp"
void* _Script_SessionMessages::SessionServicePing::get_UserName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SessionMessages::SessionServicePing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SessionMessages.SessionServicePing");
    return result;
}
