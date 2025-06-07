#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AISystemBase.hpp"
#include "AvoidanceManager.hpp"
#include "Canvas.hpp"
#include "GameInstance.hpp"
#include "GameModeBase.hpp"
#include "GameNetworkManager.hpp"
#include "GameStateBase.hpp"
#include "Level.hpp"
#include "LineBatchComponent.hpp"
#include "NavigationSystemBase.hpp"
#include "NetDriver.hpp"
#include "ParticleEventManager.hpp"
#include "PhysicsCollisionHandler.hpp"
#include "PhysicsVolume.hpp"
#include "RsCharacterMarksManager.hpp"
#include "RsDynamicDeformationController.hpp"
#include "RsLightTriggerManager.hpp"
#include "RsStreamingDefinition.hpp"
#include "RsStreamingManager.hpp"
#include "RsWorldWidgetPool.hpp"
#include "World.hpp"
_Script_Engine::RsLightTriggerManager*& _Script_Engine::World::get_LightTriggerManager() {
    return *(_Script_Engine::RsLightTriggerManager**)((uintptr_t)this + 0x150);
}
_Script_Engine::GameNetworkManager*& _Script_Engine::World::get_NetworkManager() {
    return *(_Script_Engine::GameNetworkManager**)((uintptr_t)this + 0x58);
}
_Script_Engine::NetDriver*& _Script_Engine::World::get_NetDriver() {
    return *(_Script_Engine::NetDriver**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::World::get_PSCPool() {
    return (void*)((uintptr_t)this + 0x870);
}
_Script_Engine::Level*& _Script_Engine::World::get_PersistentLevel() {
    return *(_Script_Engine::Level**)((uintptr_t)this + 0x30);
}
_Script_Engine::LineBatchComponent*& _Script_Engine::World::get_LineBatcher() {
    return *(_Script_Engine::LineBatchComponent**)((uintptr_t)this + 0x40);
}
void* _Script_Engine::World::get_LevelCollections() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_Engine::RsWorldWidgetPool*& _Script_Engine::World::get_WorldWidgetPool() {
    return *(_Script_Engine::RsWorldWidgetPool**)((uintptr_t)this + 0x158);
}
_Script_Engine::LineBatchComponent*& _Script_Engine::World::get_PersistentLineBatcher() {
    return *(_Script_Engine::LineBatchComponent**)((uintptr_t)this + 0x48);
}
_Script_Engine::LineBatchComponent*& _Script_Engine::World::get_ForegroundLineBatcher() {
    return *(_Script_Engine::LineBatchComponent**)((uintptr_t)this + 0x50);
}
_Script_Engine::Canvas*& _Script_Engine::World::get_CanvasForDrawMaterialToRenderTarget() {
    return *(_Script_Engine::Canvas**)((uintptr_t)this + 0x1b0);
}
_Script_Engine::PhysicsCollisionHandler*& _Script_Engine::World::get_PhysicsCollisionHandler() {
    return *(_Script_Engine::PhysicsCollisionHandler**)((uintptr_t)this + 0x60);
}
void* _Script_Engine::World::get_ExtraReferencedObjects() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::World::get_PerModuleDataObjects() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_Engine::RsStreamingManager*& _Script_Engine::World::get_StreamingManager() {
    return *(_Script_Engine::RsStreamingManager**)((uintptr_t)this + 0x88);
}
void* _Script_Engine::World::get_Levels() {
    return (void*)((uintptr_t)this + 0x160);
}
_Script_Engine::RsStreamingDefinition*& _Script_Engine::World::get_StreamingDefinition() {
    return *(_Script_Engine::RsStreamingDefinition**)((uintptr_t)this + 0x90);
}
void* _Script_Engine::World::get_DeferredBeginPlayActors() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_Engine::ParticleEventManager*& _Script_Engine::World::get_MyParticleEventManager() {
    return *(_Script_Engine::ParticleEventManager**)((uintptr_t)this + 0xf0);
}
_Script_Engine::Level*& _Script_Engine::World::get_CurrentLevel() {
    return *(_Script_Engine::Level**)((uintptr_t)this + 0x188);
}
_Script_Engine::PhysicsVolume*& _Script_Engine::World::get_DefaultPhysicsVolume() {
    return *(_Script_Engine::PhysicsVolume**)((uintptr_t)this + 0xf8);
}
_Script_Engine::AvoidanceManager*& _Script_Engine::World::get_AvoidanceManager() {
    return *(_Script_Engine::AvoidanceManager**)((uintptr_t)this + 0x138);
}
_Script_Engine::NavigationSystemBase*& _Script_Engine::World::get_NavigationSystem() {
    return *(_Script_Engine::NavigationSystemBase**)((uintptr_t)this + 0x118);
}
bool _Script_Engine::World::get_bAreConstraintsDirty() {
    return (*(uint8_t*)((uintptr_t)this + 0x842 + 0)) & 1 != 0;
}
_Script_Engine::GameStateBase*& _Script_Engine::World::get_GameState() {
    return *(_Script_Engine::GameStateBase**)((uintptr_t)this + 0x128);
}
_Script_Engine::GameModeBase*& _Script_Engine::World::get_AuthorityGameMode() {
    return *(_Script_Engine::GameModeBase**)((uintptr_t)this + 0x120);
}
_Script_Engine::AISystemBase*& _Script_Engine::World::get_AISystem() {
    return *(_Script_Engine::AISystemBase**)((uintptr_t)this + 0x130);
}
_Script_Engine::RsCharacterMarksManager*& _Script_Engine::World::get_CharacterMarksManager() {
    return *(_Script_Engine::RsCharacterMarksManager**)((uintptr_t)this + 0x140);
}
_Script_Engine::RsDynamicDeformationController*& _Script_Engine::World::get_DynamicDeformationController() {
    return *(_Script_Engine::RsDynamicDeformationController**)((uintptr_t)this + 0x148);
}
_Script_Engine::GameInstance*& _Script_Engine::World::get_OwningGameInstance() {
    return *(_Script_Engine::GameInstance**)((uintptr_t)this + 0x190);
}
void* _Script_Engine::World::get_ParameterCollectionInstances() {
    return (void*)((uintptr_t)this + 0x198);
}
_Script_Engine::Canvas*& _Script_Engine::World::get_CanvasForRenderingToTarget() {
    return *(_Script_Engine::Canvas**)((uintptr_t)this + 0x1a8);
}
void _Script_Engine::World::set_bAreConstraintsDirty(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x842 + 0);
    *(uint8_t*)((uintptr_t)this + 0x842 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::World::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.World");
    return result;
}
void _Script_Engine::World::HandleTimelineScrubbed() {
    return;
}
