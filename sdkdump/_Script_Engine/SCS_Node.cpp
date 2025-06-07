#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ActorComponent.hpp"
#include "SCS_Node.hpp"
void* _Script_Engine::SCS_Node::get_AttachToName() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::SCS_Node::get_VariableGuid() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::SCS_Node::get_ComponentClass() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_Engine::ActorComponent*& _Script_Engine::SCS_Node::get_ComponentTemplate() {
    return *(_Script_Engine::ActorComponent**)((uintptr_t)this + 0x30);
}
void _Script_Engine::SCS_Node::set_bIsParentComponentNative(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SCS_Node::get_bIsParentComponentNative() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void* _Script_Engine::SCS_Node::get_CookedComponentInstancingData() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SCS_Node::get_ParentComponentOrVariableName() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::SCS_Node::get_ParentComponentOwnerClassName() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::SCS_Node::get_ChildNodes() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::SCS_Node::get_MetaDataArray() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::SCS_Node::get_InternalVariableName() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_Engine::SCS_Node::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SCS_Node");
    return result;
}
