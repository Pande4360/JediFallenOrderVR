#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HLODProxyMesh.hpp"
#include "StaticMesh.hpp"
void* _Script_Engine::HLODProxyMesh::get_LODActor() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::StaticMesh*& _Script_Engine::HLODProxyMesh::get_StaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x20);
}
void* _Script_Engine::HLODProxyMesh::get_Key() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::HLODProxyMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.HLODProxyMesh");
    return result;
}
