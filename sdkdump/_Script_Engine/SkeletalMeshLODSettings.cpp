#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DataAsset.hpp"
#include "SkeletalMeshLODSettings.hpp"
void* _Script_Engine::SkeletalMeshLODSettings::get_MinLOD() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::SkeletalMeshLODSettings::get_LODGroups() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshLODSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkeletalMeshLODSettings");
    return result;
}
