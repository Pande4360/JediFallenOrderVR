#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AssetExportTask.hpp"
#include "Exporter.hpp"
bool _Script_Engine::Exporter::get_bSelectedOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 2 != 0;
}
int32_t& _Script_Engine::Exporter::get_TextIndent() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::Exporter::get_SupportedClass() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::Exporter::get_bText() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_Engine::Exporter::set_bText(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Exporter::get_FormatDescription() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Object*& _Script_Engine::Exporter::get_ExportRootScope() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x30);
}
int32_t& _Script_Engine::Exporter::get_PreferredFormatIndex() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::Exporter::get_FormatExtension() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::Exporter::set_bSelectedOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Exporter::get_bForceFileOperations() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 4 != 0;
}
void _Script_Engine::Exporter::set_bForceFileOperations(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_Engine::AssetExportTask*& _Script_Engine::Exporter::get_ExportTask() {
    return *(_Script_Engine::AssetExportTask**)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::Exporter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Exporter");
    return result;
}
bool _Script_Engine::Exporter::ScriptRunAssetExportTask(_Script_Engine::AssetExportTask* Task) {
    return;
}
bool _Script_Engine::Exporter::RunAssetExportTasks(void*& ExportTasks) {
    return;
}
bool _Script_Engine::Exporter::RunAssetExportTask(_Script_Engine::AssetExportTask* Task) {
    return;
}
