#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BuildPromotionOpenAssetSettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::BuildPromotionOpenAssetSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BuildPromotionOpenAssetSettings");
    return result;
}
void* _Script_Engine::BuildPromotionOpenAssetSettings::get_StaticMeshAsset() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::BuildPromotionOpenAssetSettings::get_BlueprintAsset() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BuildPromotionOpenAssetSettings::get_MaterialAsset() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::BuildPromotionOpenAssetSettings::get_SkeletalMeshAsset() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::BuildPromotionOpenAssetSettings::get_ParticleSystemAsset() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::BuildPromotionOpenAssetSettings::get_TextureAsset() {
    return (void*)((uintptr_t)this + 0x50);
}
