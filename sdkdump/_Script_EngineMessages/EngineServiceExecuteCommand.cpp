#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineServiceExecuteCommand.hpp"
void* _Script_EngineMessages::EngineServiceExecuteCommand::get_UserName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_EngineMessages::EngineServiceExecuteCommand::get_Command() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_EngineMessages::EngineServiceExecuteCommand::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EngineMessages.EngineServiceExecuteCommand");
    return result;
}
