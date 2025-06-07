#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithImportBaseOptions.hpp"
bool _Script_DatasmithContent::DatasmithImportBaseOptions::get_bIncludeCamera() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
bool _Script_DatasmithContent::DatasmithImportBaseOptions::get_bIncludeLight() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
bool _Script_DatasmithContent::DatasmithImportBaseOptions::get_bIncludeMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void* _Script_DatasmithContent::DatasmithImportBaseOptions::get_SceneHandling() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_DatasmithContent::DatasmithImportBaseOptions::get_bIncludeGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithImportBaseOptions::set_bIncludeGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_DatasmithContent::DatasmithImportBaseOptions::set_bIncludeMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_DatasmithContent::DatasmithImportBaseOptions::set_bIncludeLight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_DatasmithContent::DatasmithImportBaseOptions::set_bIncludeCamera(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DatasmithContent::DatasmithImportBaseOptions::get_AssetOptions() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_DatasmithContent::DatasmithImportBaseOptions::get_StaticMeshOptions() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithImportBaseOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithImportBaseOptions");
    return result;
}
