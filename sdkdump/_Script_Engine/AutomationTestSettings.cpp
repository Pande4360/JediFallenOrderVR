#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AutomationTestSettings.hpp"
void* _Script_Engine::AutomationTestSettings::get_ParticleEditorPromotionTest() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Script_Engine::AutomationTestSettings::get_EngineTestModules() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::AutomationTestSettings::get_EditorTestModules() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::AutomationTestSettings::get_AutomationTestmap() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::AutomationTestSettings::get_EditorPerformanceTestMaps() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::AutomationTestSettings::get_AssetsToOpen() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::AutomationTestSettings::get_MaterialEditorPromotionTest() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_Engine::AutomationTestSettings::get_BuildPromotionTest() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::AutomationTestSettings::get_BlueprintEditorPromotionTest() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_Engine::AutomationTestSettings::get_TestLevelFolders() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_Engine::AutomationTestSettings::get_ExternalTools() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Script_Engine::AutomationTestSettings::get_ImportExportTestDefinitions() {
    return (void*)((uintptr_t)this + 0x300);
}
void* _Script_Engine::AutomationTestSettings::get_LaunchOnSettings() {
    return (void*)((uintptr_t)this + 0x310);
}
void* _Script_Engine::AutomationTestSettings::get_DefaultScreenshotResolution() {
    return (void*)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Script_Engine::AutomationTestSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AutomationTestSettings");
    return result;
}
