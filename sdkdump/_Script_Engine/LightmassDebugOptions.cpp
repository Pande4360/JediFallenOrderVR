#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightmassDebugOptions.hpp"
void _Script_Engine::LightmassDebugOptions::set_bDebugMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LightmassDebugOptions::get_bColorByExecutionTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 4 != 0;
}
bool _Script_Engine::LightmassDebugOptions::get_bDebugMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_Engine::LightmassDebugOptions::get_bStatsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Engine::LightmassDebugOptions::set_bGatherBSPSurfacesAcrossComponents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::LightmassDebugOptions::set_bStatsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::LightmassDebugOptions::get_bGatherBSPSurfacesAcrossComponents() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
bool _Script_Engine::LightmassDebugOptions::get_bSortMappings() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 4 != 0;
}
float& _Script_Engine::LightmassDebugOptions::get_CoplanarTolerance() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_Engine::LightmassDebugOptions::get_bUseImmediateImport() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::LightmassDebugOptions::set_bOnlyCalcDebugTexelMappings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::LightmassDebugOptions::set_bUseImmediateImport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LightmassDebugOptions::get_bImmediateProcessMappings() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
void _Script_Engine::LightmassDebugOptions::set_bImmediateProcessMappings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::LightmassDebugOptions::set_bSortMappings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::LightmassDebugOptions::get_bDumpBinaryFiles() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 8 != 0;
}
void _Script_Engine::LightmassDebugOptions::set_bDumpBinaryFiles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::LightmassDebugOptions::get_bDebugMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 16 != 0;
}
void _Script_Engine::LightmassDebugOptions::set_bDebugMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::LightmassDebugOptions::get_bPadMappings() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 32 != 0;
}
void _Script_Engine::LightmassDebugOptions::set_bPadMappings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::LightmassDebugOptions::get_bDebugPaddings() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 64 != 0;
}
void _Script_Engine::LightmassDebugOptions::set_bDebugPaddings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::LightmassDebugOptions::get_bOnlyCalcDebugTexelMappings() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 128 != 0;
}
bool _Script_Engine::LightmassDebugOptions::get_bUseRandomColors() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_Engine::LightmassDebugOptions::set_bUseRandomColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::LightmassDebugOptions::get_bColorBordersGreen() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 2 != 0;
}
void _Script_Engine::LightmassDebugOptions::set_bColorBordersGreen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::LightmassDebugOptions::set_bColorByExecutionTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::LightmassDebugOptions::get_ExecutionTimeDivisor() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Engine::LightmassDebugOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LightmassDebugOptions");
    return result;
}
