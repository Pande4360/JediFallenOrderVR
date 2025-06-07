#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditorMapPerformanceTestDefinition.hpp"
void* _Script_Engine::EditorMapPerformanceTestDefinition::get_PerformanceTestmap() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::EditorMapPerformanceTestDefinition::get_TestTimer() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::EditorMapPerformanceTestDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EditorMapPerformanceTestDefinition");
    return result;
}
