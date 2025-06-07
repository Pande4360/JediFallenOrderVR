#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Node.hpp"
_Script_CoreUObject::Class* _Script_Engine::Node::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.Node");
    return result;
}
void* _Script_Engine::Node::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::Node::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::Node::get_ParentName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::Node::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::Node::get_bAdvanced() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_Engine::Node::set_bAdvanced(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
