#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkelMeshSkinWeightInfo.hpp"
int32_t& _Script_Engine::SkelMeshSkinWeightInfo::get_Bones() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SkelMeshSkinWeightInfo::get_Weights() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::SkelMeshSkinWeightInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkelMeshSkinWeightInfo");
    return result;
}
