#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExternalToolDefinition.hpp"
void* _Script_Engine::ExternalToolDefinition::get_WorkingDirectory() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::ExternalToolDefinition::get_ToolName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ExternalToolDefinition::get_ScriptExtension() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::ExternalToolDefinition::get_CommandLineOptions() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::ExternalToolDefinition::get_ExecutablePath() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::ExternalToolDefinition::get_ScriptDirectory() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::ExternalToolDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ExternalToolDefinition");
    return result;
}
