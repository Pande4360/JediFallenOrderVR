#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Blueprint.hpp"
#include "EdGraph.hpp"
#include "GraphReference.hpp"
_Script_Engine::EdGraph*& _Script_Engine::GraphReference::get_MacroGraph() {
    return *(_Script_Engine::EdGraph**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::GraphReference::get_GraphGuid() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::Blueprint*& _Script_Engine::GraphReference::get_GraphBlueprint() {
    return *(_Script_Engine::Blueprint**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::GraphReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.GraphReference");
    return result;
}
