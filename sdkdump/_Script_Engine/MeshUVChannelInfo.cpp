#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshUVChannelInfo.hpp"
bool _Script_Engine::MeshUVChannelInfo::get_bInitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::MeshUVChannelInfo::set_bInitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshUVChannelInfo::get_bOverrideDensities() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
float& _Script_Engine::MeshUVChannelInfo::get_LocalUVDensities() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_Engine::MeshUVChannelInfo::set_bOverrideDensities(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MeshUVChannelInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshUVChannelInfo");
    return result;
}
