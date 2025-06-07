#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshSamplingRegionMaterialFilter.hpp"
void* _Script_Engine::SkeletalMeshSamplingRegionMaterialFilter::get_MaterialName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshSamplingRegionMaterialFilter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshSamplingRegionMaterialFilter");
    return result;
}
