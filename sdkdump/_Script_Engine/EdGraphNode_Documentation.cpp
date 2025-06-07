#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EdGraphNode.hpp"
#include "EdGraphNode_Documentation.hpp"
void* _Script_Engine::EdGraphNode_Documentation::get_Excerpt() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::EdGraphNode_Documentation::get_Link() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Engine::EdGraphNode_Documentation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.EdGraphNode_Documentation");
    return result;
}
