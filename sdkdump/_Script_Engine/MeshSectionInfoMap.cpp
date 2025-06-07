#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshSectionInfoMap.hpp"
void* _Script_Engine::MeshSectionInfoMap::get_Map() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::MeshSectionInfoMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshSectionInfoMap");
    return result;
}
