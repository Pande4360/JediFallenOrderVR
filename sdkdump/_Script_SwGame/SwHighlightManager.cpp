#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_RsGameTechRT\RsPostProcessSettingsDefinition.hpp"
#include "SwHighlightManager.hpp"
void _Script_SwGame::SwHighlightManager::EnableHighlight(_Script_Engine::Actor* InActor, void* InHighlightType) {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::SwHighlightManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwHighlightManager");
    return result;
}
_Script_RsGameTechRT::RsPostProcessSettingsDefinition*& _Script_SwGame::SwHighlightManager::get_PostProcessSettings() {
    return *(_Script_RsGameTechRT::RsPostProcessSettingsDefinition**)((uintptr_t)this + 0x40);
}
_Script_Engine::MaterialInstanceDynamic*& _Script_SwGame::SwHighlightManager::get_DynamicHighlightMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x48);
}
void* _Script_SwGame::SwHighlightManager::get_BlendData() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_SwGame::SwHighlightManager::SetHighlightBlendCurve(_Script_Engine::Actor* InBlendActor, void* InHighlightType, _Script_Engine::CurveFloat* InBlendCurve, float Duration) {
    return;
}
void _Script_SwGame::SwHighlightManager::EnableIntenseHighlightMode(float FresnelBias) {
    return;
}
void _Script_SwGame::SwHighlightManager::DisableIntenseHighlightMode() {
    return;
}
void _Script_SwGame::SwHighlightManager::DisableHighlight(_Script_Engine::Actor* InActor, void* InHighlightType) {
    return;
}
