#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithStaticMeshImportOptions.hpp"
void _Script_DatasmithContent::DatasmithStaticMeshImportOptions::set_bRemoveDegenerates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DatasmithContent::DatasmithStaticMeshImportOptions::get_MinLightmapResolution() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_DatasmithContent::DatasmithStaticMeshImportOptions::get_MaxLightmapResolution() {
    return (void*)((uintptr_t)this + 0x1);
}
bool _Script_DatasmithContent::DatasmithStaticMeshImportOptions::get_bGenerateLightmapUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithStaticMeshImportOptions::set_bGenerateLightmapUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DatasmithContent::DatasmithStaticMeshImportOptions::get_bRemoveDegenerates() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithStaticMeshImportOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithStaticMeshImportOptions");
    return result;
}
