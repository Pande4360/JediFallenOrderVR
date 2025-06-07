#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AutoCompleteCommand.hpp"
void* _Script_EngineSettings::AutoCompleteCommand::get_Command() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EngineSettings::AutoCompleteCommand::get_Desc() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_EngineSettings::AutoCompleteCommand::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EngineSettings.AutoCompleteCommand");
    return result;
}
