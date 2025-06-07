#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SCS_Node.hpp"
#include "SimpleConstructionScript.hpp"
void* _Script_Engine::SimpleConstructionScript::get_RootNodes() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::SimpleConstructionScript::get_AllNodes() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::SimpleConstructionScript::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SimpleConstructionScript");
    return result;
}
_Script_Engine::SCS_Node*& _Script_Engine::SimpleConstructionScript::get_DefaultSceneRootNode() {
    return *(_Script_Engine::SCS_Node**)((uintptr_t)this + 0x48);
}
