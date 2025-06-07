#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovementProperties.hpp"
#include "NavAgentProperties.hpp"
float& _Script_Engine::NavAgentProperties::get_AgentRadius() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::NavAgentProperties::get_Name() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::NavAgentProperties::get_AgentStepHeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::NavAgentProperties::get_AgentHeight() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::NavAgentProperties::get_PreferredNavData() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::NavAgentProperties::get_NavWalkingSearchHeightScale() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::NavAgentProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NavAgentProperties");
    return result;
}
