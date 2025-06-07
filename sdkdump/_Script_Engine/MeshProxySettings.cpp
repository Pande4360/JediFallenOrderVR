#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshProxySettings.hpp"
int32_t& _Script_Engine::MeshProxySettings::get_TextureHeight() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
int32_t& _Script_Engine::MeshProxySettings::get_ScreenSize() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::MeshProxySettings::get_bOverrideVoxelSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bOverrideVoxelSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshProxySettings::set_bComputeLightMapResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MeshProxySettings::get_VoxelSize() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::MeshProxySettings::get_bCreateCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void* _Script_Engine::MeshProxySettings::get_MaterialSettings() {
    return (void*)((uintptr_t)this + 0xc);
}
bool _Script_Engine::MeshProxySettings::get_bAllowAdjacency() {
    return (*(uint8_t*)((uintptr_t)this + 0xcd + 0)) & 1 != 0;
}
int32_t& _Script_Engine::MeshProxySettings::get_TextureWidth() {
    return *(int32_t*)((uintptr_t)this + 0x98);
}
void _Script_Engine::MeshProxySettings::set_bGenerateLightmapUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bExportNormalMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bExportNormalMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bExportMetallicMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xa1 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bExportMetallicMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bExportRoughnessMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xa2 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bExportRoughnessMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bBakeVertexData() {
    return (*(uint8_t*)((uintptr_t)this + 0xca + 0)) & 1 != 0;
}
bool _Script_Engine::MeshProxySettings::get_bExportSpecularMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xa3 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bExportSpecularMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bCalculateCorrectLODModel() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
bool _Script_Engine::MeshProxySettings::get_bAllowVertexColors() {
    return (*(uint8_t*)((uintptr_t)this + 0xd1 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bCalculateCorrectLODModel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MeshProxySettings::get_MergeDistance() {
    return *(float*)((uintptr_t)this + 0xa8);
}
int32_t& _Script_Engine::MeshProxySettings::get_LightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0xc4);
}
void* _Script_Engine::MeshProxySettings::get_UnresolvedGeometryColor() {
    return (void*)((uintptr_t)this + 0xac);
}
bool _Script_Engine::MeshProxySettings::get_bOverrideTransferDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bOverrideTransferDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MeshProxySettings::get_MaxRayCastDist() {
    return *(float*)((uintptr_t)this + 0xb4);
}
bool _Script_Engine::MeshProxySettings::get_bUseHardAngleThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bUseHardAngleThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MeshProxySettings::get_HardAngleThreshold() {
    return *(float*)((uintptr_t)this + 0xbc);
}
void* _Script_Engine::MeshProxySettings::get_NormalCalculationMethod() {
    return (void*)((uintptr_t)this + 0xc0);
}
bool _Script_Engine::MeshProxySettings::get_bComputeLightMapResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
bool _Script_Engine::MeshProxySettings::get_bRecalculateNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0xc9 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bRecalculateNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshProxySettings::set_bBakeVertexData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xca + 0);
    *(uint8_t*)((uintptr_t)this + 0xca + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bUseLandscapeCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0xcb + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bAllowAdjacency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcd + 0);
    *(uint8_t*)((uintptr_t)this + 0xcd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshProxySettings::set_bUseLandscapeCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcb + 0);
    *(uint8_t*)((uintptr_t)this + 0xcb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MeshProxySettings::get_LandscapeCullingPrecision() {
    return (void*)((uintptr_t)this + 0xcc);
}
bool _Script_Engine::MeshProxySettings::get_bAllowDistanceField() {
    return (*(uint8_t*)((uintptr_t)this + 0xce + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bAllowDistanceField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xce + 0);
    *(uint8_t*)((uintptr_t)this + 0xce + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bReuseMeshLightmapUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bReuseMeshLightmapUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshProxySettings::set_bCreateCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshProxySettings::set_bAllowVertexColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bGenerateLightmapUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0xd2 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::MeshProxySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshProxySettings");
    return result;
}
