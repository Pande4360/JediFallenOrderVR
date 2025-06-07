#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithMeshBuildSettingsTemplate.hpp"
bool _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_bUseMikkTSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_bRecomputeTangents() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
bool _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_bBuildAdjacencyBuffer() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::set_bUseMikkTSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_bRecomputeNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::set_bRecomputeNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::set_bRecomputeTangents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::set_bRemoveDegenerates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_bRemoveDegenerates() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
void _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::set_bBuildAdjacencyBuffer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_bUseHighPrecisionTangentBasis() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::set_bUseHighPrecisionTangentBasis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_bUseFullPrecisionUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
void _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::set_bUseFullPrecisionUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_bGenerateLightmapUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 128 != 0;
}
void _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::set_bGenerateLightmapUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
int32_t& _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_MinLightmapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_SrcLightmapIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::get_DstLightmapIndex() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithMeshBuildSettingsTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithMeshBuildSettingsTemplate");
    return result;
}
