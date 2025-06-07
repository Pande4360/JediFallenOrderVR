#include "..\FUObjectArray.hpp"
#include "LevelLoadManager_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::set_StartListsLoaded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::get_LoadDone() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_Engine::SceneComponent*& _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x368);
}
void* _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::get_PlanetToLoad() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::get_WorldNames() {
    return (void*)((uintptr_t)this + 0x388);
}
bool _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::get_StartListsLoaded() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void* _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::get_StartToLoad() {
    return (void*)((uintptr_t)this + 0x3e0);
}
bool _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::get_StartListRequested() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e8 + 0)) & 1 != 0;
}
void _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::set_StartListRequested(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::get_PlanetListRequested() {
    return (void*)((uintptr_t)this + 0x3f0);
}
_Script_CoreUObject::Class* _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/UI/PauseMenu/LevelLoadManager.LevelLoadManager_C");
    return result;
}
void _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::UserConstructionScript0() {
    return;
}
void _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::ReceiveBeginPlay0() {
    return;
}
void _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::DoLevelLoad(void* World, void* Start) {
    return;
}
void _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::Timer_CheckForLoad() {
    return;
}
void _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::ExecuteUbergraph_LevelLoadManager(int32_t EntryPoint) {
    return;
}
void _Game_UI_PauseMenu_LevelLoadManager::LevelLoadManager_C::LoadDone__DelegateSignature() {
    return;
}
