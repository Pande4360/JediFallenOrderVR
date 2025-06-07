#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshSamplingInfo.hpp"
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshSamplingInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshSamplingInfo");
    return result;
}
void* _Script_Engine::SkeletalMeshSamplingInfo::get_Regions() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SkeletalMeshSamplingInfo::get_BuiltData() {
    return (void*)((uintptr_t)this + 0x10);
}
