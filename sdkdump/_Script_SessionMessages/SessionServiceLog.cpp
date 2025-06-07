#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SessionServiceLog.hpp"
_Script_CoreUObject::Class* _Script_SessionMessages::SessionServiceLog::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SessionMessages.SessionServiceLog");
    return result;
}
void* _Script_SessionMessages::SessionServiceLog::get_InstanceId() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_SessionMessages::SessionServiceLog::get_Category() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SessionMessages::SessionServiceLog::get_Data() {
    return (void*)((uintptr_t)this + 0x8);
}
double& _Script_SessionMessages::SessionServiceLog::get_TimeSeconds() {
    return *(double*)((uintptr_t)this + 0x28);
}
void* _Script_SessionMessages::SessionServiceLog::get_Verbosity() {
    return (void*)((uintptr_t)this + 0x30);
}
