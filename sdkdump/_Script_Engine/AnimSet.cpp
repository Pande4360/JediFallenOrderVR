#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AnimSet.hpp"
void* _Script_Engine::AnimSet::get_UseTranslationBoneNames() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_Engine::AnimSet::get_bAnimRotationOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::AnimSet::set_bAnimRotationOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimSet::get_TrackBoneNames() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::AnimSet::get_BoneUseAnimTranslation() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::AnimSet::get_LinkupCache() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::AnimSet::get_ForceMeshTranslationBoneNames() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::AnimSet::get_ForceUseMeshTranslation() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::AnimSet::get_PreviewSkelMeshName() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::AnimSet::get_BestRatioSkelMeshName() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimSet");
    return result;
}
