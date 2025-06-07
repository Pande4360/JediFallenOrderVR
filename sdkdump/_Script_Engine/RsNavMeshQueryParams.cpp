#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsNavMeshQueryParams.hpp"
float& _Script_Engine::RsNavMeshQueryParams::get_DefaultMaxSearchNodes() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RsNavMeshQueryParams::get_HeuristicScale() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::RsNavMeshQueryParams::get_VerticalDeviationFromGroundCompensation() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::RsNavMeshQueryParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsNavMeshQueryParams");
    return result;
}
float& _Script_Engine::RsNavMeshQueryParams::get_DefaultMaxHierarchicalSearchNodes() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_Engine::RsNavMeshQueryParams::get_bUseVirtualFilters() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Engine::RsNavMeshQueryParams::set_bUseVirtualFilters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
