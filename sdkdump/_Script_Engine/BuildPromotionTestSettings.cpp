#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BuildPromotionTestSettings.hpp"
void* _Script_Engine::BuildPromotionTestSettings::get_OpenAssets() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::BuildPromotionTestSettings::get_DefaultStaticMeshAsset() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BuildPromotionTestSettings::get_SourceControlMaterial() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::BuildPromotionTestSettings::get_ImportWorkflow() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::BuildPromotionTestSettings::get_NewProjectSettings() {
    return (void*)((uintptr_t)this + 0x1c0);
}
_Script_CoreUObject::Class* _Script_Engine::BuildPromotionTestSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BuildPromotionTestSettings");
    return result;
}
