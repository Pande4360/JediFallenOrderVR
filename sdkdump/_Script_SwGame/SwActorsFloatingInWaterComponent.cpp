#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "SwActorsFloatingInWaterComponent.hpp"
#include "SwActorsFloatingInWaterDataAsset.hpp"
_Script_SwGame::SwActorsFloatingInWaterDataAsset*& _Script_SwGame::SwActorsFloatingInWaterComponent::get_SettingsDataAsset() {
    return *(_Script_SwGame::SwActorsFloatingInWaterDataAsset**)((uintptr_t)this + 0x178);
}
_Script_Engine::Actor*& _Script_SwGame::SwActorsFloatingInWaterComponent::get_WaterActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x170);
}
void* _Script_SwGame::SwActorsFloatingInWaterComponent::get_m_LowResPool() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_SwGame::SwActorsFloatingInWaterComponent::get_m_HiResPool() {
    return (void*)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Class* _Script_SwGame::SwActorsFloatingInWaterComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwActorsFloatingInWaterComponent");
    return result;
}
