#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AssetExportTask.hpp"
#include "Exporter.hpp"
_Script_CoreUObject::Object*& _Script_Engine::AssetExportTask::get_Object() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x28);
}
_Script_Engine::Exporter*& _Script_Engine::AssetExportTask::get_Exporter() {
    return *(_Script_Engine::Exporter**)((uintptr_t)this + 0x30);
}
void _Script_Engine::AssetExportTask::set_bReplaceIdentical(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AssetExportTask::get_Filename() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::AssetExportTask::get_bSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_Engine::AssetExportTask::set_bSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetExportTask::get_bReplaceIdentical() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
bool _Script_Engine::AssetExportTask::get_bPrompt() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a + 0)) & 1 != 0;
}
void _Script_Engine::AssetExportTask::set_bPrompt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetExportTask::get_bAutomated() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b + 0)) & 1 != 0;
}
void _Script_Engine::AssetExportTask::set_bAutomated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetExportTask::get_bUseFileArchive() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_Engine::AssetExportTask::set_bUseFileArchive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AssetExportTask::get_bWriteEmptyFiles() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d + 0)) & 1 != 0;
}
void _Script_Engine::AssetExportTask::set_bWriteEmptyFiles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AssetExportTask::get_IgnoreObjectList() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Object*& _Script_Engine::AssetExportTask::get_Options() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x60);
}
void* _Script_Engine::AssetExportTask::get_Errors() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::AssetExportTask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AssetExportTask");
    return result;
}
