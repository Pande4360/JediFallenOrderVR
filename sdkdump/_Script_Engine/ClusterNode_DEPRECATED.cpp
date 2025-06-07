#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ClusterNode_DEPRECATED.hpp"
void* _Script_Engine::ClusterNode_DEPRECATED::get_BoundMin() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::ClusterNode_DEPRECATED::get_FirstChild() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::ClusterNode_DEPRECATED::get_BoundMax() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::ClusterNode_DEPRECATED::get_LastChild() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_Engine::ClusterNode_DEPRECATED::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ClusterNode_DEPRECATED");
    return result;
}
int32_t& _Script_Engine::ClusterNode_DEPRECATED::get_FirstInstance() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::ClusterNode_DEPRECATED::get_LastInstance() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
