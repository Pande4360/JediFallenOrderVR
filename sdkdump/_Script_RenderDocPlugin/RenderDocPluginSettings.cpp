#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RenderDocPluginSettings.hpp"
bool _Script_RenderDocPlugin::RenderDocPluginSettings::get_bEnableRenderDoc() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_RenderDocPlugin::RenderDocPluginSettings::set_bReferenceAllResources(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_RenderDocPlugin::RenderDocPluginSettings::set_bEnableRenderDoc(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RenderDocPlugin::RenderDocPluginSettings::get_bEnableRenderDocCrashHandler() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 64 != 0;
}
bool _Script_RenderDocPlugin::RenderDocPluginSettings::get_bCaptureAllActivity() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
void* _Script_RenderDocPlugin::RenderDocPluginSettings::get_RenderDocBinaryPath() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_RenderDocPlugin::RenderDocPluginSettings::get_bCaptureAllCallstacks() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 4 != 0;
}
void _Script_RenderDocPlugin::RenderDocPluginSettings::set_bCaptureAllActivity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_RenderDocPlugin::RenderDocPluginSettings::set_bEnableRenderDocCrashHandler(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_RenderDocPlugin::RenderDocPluginSettings::set_bCaptureAllCallstacks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RenderDocPlugin::RenderDocPluginSettings::get_bReferenceAllResources() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 8 != 0;
}
void _Script_RenderDocPlugin::RenderDocPluginSettings::set_bSaveAllInitials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_RenderDocPlugin::RenderDocPluginSettings::get_bSaveAllInitials() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 16 != 0;
}
bool _Script_RenderDocPlugin::RenderDocPluginSettings::get_bShowHelpOnStartup() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 32 != 0;
}
void _Script_RenderDocPlugin::RenderDocPluginSettings::set_bShowHelpOnStartup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_CoreUObject::Class* _Script_RenderDocPlugin::RenderDocPluginSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RenderDocPlugin.RenderDocPluginSettings");
    return result;
}
