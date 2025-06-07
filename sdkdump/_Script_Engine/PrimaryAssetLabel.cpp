#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimaryAssetLabel.hpp"
#include "PrimaryDataAsset.hpp"
void* _Script_Engine::PrimaryAssetLabel::get_Rules() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::PrimaryAssetLabel::get_bIsRuntimeLabel() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 2 != 0;
}
bool _Script_Engine::PrimaryAssetLabel::get_bLabelAssetsInMyDirectory() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_Engine::PrimaryAssetLabel::set_bLabelAssetsInMyDirectory(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PrimaryAssetLabel::set_bIsRuntimeLabel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::PrimaryAssetLabel::get_AssetCollection() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::PrimaryAssetLabel::get_ExplicitAssets() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::PrimaryAssetLabel::get_ExplicitBlueprints() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::PrimaryAssetLabel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PrimaryAssetLabel");
    return result;
}
