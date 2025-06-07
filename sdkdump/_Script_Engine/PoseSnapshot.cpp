#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PoseSnapshot.hpp"
bool _Script_Engine::PoseSnapshot::get_bIsValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_Engine::PoseSnapshot::get_LocalTransforms() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PoseSnapshot::get_BoneNames() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::PoseSnapshot::get_SkeletalMeshName() {
    return (void*)((uintptr_t)this + 0x20);
}
void _Script_Engine::PoseSnapshot::set_bIsValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PoseSnapshot::get_SnapshotName() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::PoseSnapshot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PoseSnapshot");
    return result;
}
