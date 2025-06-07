#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EditorImportExportTestDefinition.hpp"
void* _Script_Engine::EditorImportExportTestDefinition::get_ImportFilePath() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_Engine::EditorImportExportTestDefinition::set_bSkipExport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::EditorImportExportTestDefinition::get_ExportFileExtension() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::EditorImportExportTestDefinition::get_FactorySettings() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::EditorImportExportTestDefinition::get_bSkipExport() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::EditorImportExportTestDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EditorImportExportTestDefinition");
    return result;
}
