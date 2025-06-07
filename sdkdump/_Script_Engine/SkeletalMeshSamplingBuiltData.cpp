#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshSamplingBuiltData.hpp"
void* _Script_Engine::SkeletalMeshSamplingBuiltData::get_WholeMeshBuiltData() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SkeletalMeshSamplingBuiltData::get_RegionBuiltData() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshSamplingBuiltData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshSamplingBuiltData");
    return result;
}
