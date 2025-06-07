#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\AISystem.hpp"
#include "..\_Script_AIModule\BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICorpseManager.hpp"
#include "RsAIEncounterManager.hpp"
#include "RsAIGameStateManager.hpp"
#include "RsAINavLinkManager.hpp"
#include "RsAIPOIDefinition.hpp"
#include "RsAIPOIManager.hpp"
#include "RsAIResourceSystem.hpp"
#include "RsAISensorSystem.hpp"
#include "RsAISpawningSystem.hpp"
#include "RsAISystem.hpp"
#include "RsAITeamSystem.hpp"
_Script_RsGameTechRT::RsAISensorSystem*& _Script_RsGameTechRT::RsAISystem::get_SensorSystem() {
    return *(_Script_RsGameTechRT::RsAISensorSystem**)((uintptr_t)this + 0x250);
}
void* _Script_RsGameTechRT::RsAISystem::get_OnAIInitializedEvent() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_RsGameTechRT::RsAISystem::get_EncounterManagerClassName() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_RsGameTechRT::RsAISystem::get_CorpseManagerClassName() {
    return (void*)((uintptr_t)this + 0x1e0);
}
_Script_RsGameTechRT::RsAIGameStateManager*& _Script_RsGameTechRT::RsAISystem::get_GameStateManager() {
    return *(_Script_RsGameTechRT::RsAIGameStateManager**)((uintptr_t)this + 0x260);
}
void* _Script_RsGameTechRT::RsAISystem::get_OnAIUninitializedEvent() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_RsGameTechRT::RsAISystem::get_SpawningSystemClassName() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_RsGameTechRT::RsAISystem::get_ResourceSystemClassName() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_RsGameTechRT::RsAISystem::get_SensorSystemClassName() {
    return (void*)((uintptr_t)this + 0x198);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_ReturnHomeBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2e8);
}
void* _Script_RsGameTechRT::RsAISystem::get_TeamSystemClassName() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_RsGameTechRT::RsAISystem::get_GameStateManagerClassName() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_RsGameTechRT::RsAISystem::get_POIManagerClassName() {
    return (void*)((uintptr_t)this + 0x210);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_POIDefaultBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x308);
}
void* _Script_RsGameTechRT::RsAISystem::get_NavLinkManagerClassName() {
    return (void*)((uintptr_t)this + 0x228);
}
_Script_RsGameTechRT::RsAISpawningSystem*& _Script_RsGameTechRT::RsAISystem::get_SpawningSystem() {
    return *(_Script_RsGameTechRT::RsAISpawningSystem**)((uintptr_t)this + 0x240);
}
_Script_RsGameTechRT::RsAIResourceSystem*& _Script_RsGameTechRT::RsAISystem::get_ResourceSystem() {
    return *(_Script_RsGameTechRT::RsAIResourceSystem**)((uintptr_t)this + 0x248);
}
_Script_RsGameTechRT::RsAIPOIDefinition*& _Script_RsGameTechRT::RsAISystem::get_POIDefaultDefinition() {
    return *(_Script_RsGameTechRT::RsAIPOIDefinition**)((uintptr_t)this + 0x310);
}
_Script_RsGameTechRT::RsAITeamSystem*& _Script_RsGameTechRT::RsAISystem::get_TeamSystem() {
    return *(_Script_RsGameTechRT::RsAITeamSystem**)((uintptr_t)this + 0x258);
}
_Script_RsGameTechRT::RsAICorpseManager*& _Script_RsGameTechRT::RsAISystem::get_CorpseManager() {
    return *(_Script_RsGameTechRT::RsAICorpseManager**)((uintptr_t)this + 0x268);
}
_Script_RsGameTechRT::RsAIEncounterManager*& _Script_RsGameTechRT::RsAISystem::get_EncounterManager() {
    return *(_Script_RsGameTechRT::RsAIEncounterManager**)((uintptr_t)this + 0x270);
}
_Script_RsGameTechRT::RsAIPOIManager*& _Script_RsGameTechRT::RsAISystem::get_POIManager() {
    return *(_Script_RsGameTechRT::RsAIPOIManager**)((uintptr_t)this + 0x278);
}
_Script_RsGameTechRT::RsAINavLinkManager*& _Script_RsGameTechRT::RsAISystem::get_NavLinkManager() {
    return *(_Script_RsGameTechRT::RsAINavLinkManager**)((uintptr_t)this + 0x280);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_ScriptedMoveToBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2c8);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_RootBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x288);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_AmbientToAlertTransitionBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x290);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_AlertToAggroTransitionBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x298);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_AggroToAlertTransitionBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2a0);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_AlertToAmbientTransitionBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2a8);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_CombatReactionBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2b0);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_WaitBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2b8);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_AmbientIdleBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2c0);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_ConversationBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2d0);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_PatrolBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2d8);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_WanderBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2e0);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_InvestigateBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2f0);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_FightIdleBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x2f8);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAISystem::get_POIRootBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x300);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISystem");
    return result;
}
