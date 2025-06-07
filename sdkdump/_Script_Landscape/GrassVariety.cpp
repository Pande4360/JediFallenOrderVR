#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "GrassVariety.hpp"
_Script_Engine::StaticMesh*& _Script_Landscape::GrassVariety::get_GrassMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::GrassVariety::get_GrassDensity() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Landscape::GrassVariety::get_bUseGrid() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_Landscape::GrassVariety::set_bUseGrid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Landscape::GrassVariety::set_bReceivesDecals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Landscape::GrassVariety::get_PlacementJitter() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Landscape::GrassVariety::get_StartCullDistance() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Landscape::GrassVariety::get_EndCullDistance() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Landscape::GrassVariety::get_MinLOD() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
void* _Script_Landscape::GrassVariety::get_Scaling() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Landscape::GrassVariety::get_ScaleX() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_Landscape::GrassVariety::get_ScaleY() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_Landscape::GrassVariety::get_ScaleZ() {
    return (void*)((uintptr_t)this + 0x34);
}
bool _Script_Landscape::GrassVariety::get_RandomRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
bool _Script_Landscape::GrassVariety::get_bKeepInstanceBufferCPUCopy() {
    return (*(uint8_t*)((uintptr_t)this + 0x42 + 0)) & 1 != 0;
}
void _Script_Landscape::GrassVariety::set_RandomRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::GrassVariety::get_AlignToSurface() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d + 0)) & 1 != 0;
}
void _Script_Landscape::GrassVariety::set_AlignToSurface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::GrassVariety::get_bUseLandscapeLightmap() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e + 0)) & 1 != 0;
}
void _Script_Landscape::GrassVariety::set_bUseLandscapeLightmap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Landscape::GrassVariety::get_LightingChannels() {
    return (void*)((uintptr_t)this + 0x3f);
}
bool _Script_Landscape::GrassVariety::get_bReceivesDecals() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
bool _Script_Landscape::GrassVariety::get_bCastDynamicShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x41 + 0)) & 1 != 0;
}
void _Script_Landscape::GrassVariety::set_bCastDynamicShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x41 + 0);
    *(uint8_t*)((uintptr_t)this + 0x41 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Landscape::GrassVariety::set_bKeepInstanceBufferCPUCopy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x42 + 0);
    *(uint8_t*)((uintptr_t)this + 0x42 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Landscape::GrassVariety::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.GrassVariety");
    return result;
}
