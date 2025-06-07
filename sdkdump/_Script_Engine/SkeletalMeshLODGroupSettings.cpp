#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshLODGroupSettings.hpp"
void* _Script_Engine::SkeletalMeshLODGroupSettings::get_ReductionSettings() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::SkeletalMeshLODGroupSettings::get_ScreenSize() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SkeletalMeshLODGroupSettings::get_LODHysteresis() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::SkeletalMeshLODGroupSettings::get_BoneFilterActionOption() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::SkeletalMeshLODGroupSettings::get_BoneList() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshLODGroupSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshLODGroupSettings");
    return result;
}
