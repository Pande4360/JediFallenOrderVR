#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshInstancingSettings.hpp"
bool _Script_Engine::MeshInstancingSettings::get_bUseHLODVolumes() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
void* _Script_Engine::MeshInstancingSettings::get_ActorClassToUse() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::MeshInstancingSettings::get_InstanceReplacementThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::MeshInstancingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshInstancingSettings");
    return result;
}
void* _Script_Engine::MeshInstancingSettings::get_MeshReplacementMethod() {
    return (void*)((uintptr_t)this + 0xc);
}
bool _Script_Engine::MeshInstancingSettings::get_bSkipMeshesWithVertexColors() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::MeshInstancingSettings::set_bSkipMeshesWithVertexColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshInstancingSettings::set_bUseHLODVolumes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
