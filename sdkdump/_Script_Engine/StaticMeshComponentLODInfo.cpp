#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticMeshComponentLODInfo.hpp"
void* _Script_Engine::StaticMeshComponentLODInfo::get_PaintedVertices() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMeshComponentLODInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticMeshComponentLODInfo");
    return result;
}
