#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BuildPromotionImportWorkflowSettings.hpp"
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_Diffuse() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_Normal() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_StaticMesh() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_ReimportStaticMesh() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_BlendShapeMesh() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_Animation() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_SkeletalMesh() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_MorphMesh() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_Sound() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_SurroundSound() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::BuildPromotionImportWorkflowSettings::get_OtherAssetsToImport() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_Engine::BuildPromotionImportWorkflowSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BuildPromotionImportWorkflowSettings");
    return result;
}
