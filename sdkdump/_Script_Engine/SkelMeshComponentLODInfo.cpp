#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkelMeshComponentLODInfo.hpp"
void* _Script_Engine::SkelMeshComponentLODInfo::get_HiddenMaterials() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::SkelMeshComponentLODInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkelMeshComponentLODInfo");
    return result;
}
