#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\AISystem.hpp"
namespace _Script_RsGameTechRT {
struct RsAISpawningSystem;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Script_RsGameTechRT {
struct RsAIResourceSystem;
}
namespace _Script_RsGameTechRT {
struct RsAICorpseManager;
}
namespace _Script_RsGameTechRT {
struct RsAISensorSystem;
}
namespace _Script_RsGameTechRT {
struct RsAITeamSystem;
}
namespace _Script_RsGameTechRT {
struct RsAIEncounterManager;
}
namespace _Script_RsGameTechRT {
struct RsAIPOIManager;
}
namespace _Script_RsGameTechRT {
struct RsAINavLinkManager;
}
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_RsGameTechRT {
struct RsAIPOIDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISystem : public _Script_AIModule::AISystem {
    private: char pad_130[0x450]; public:
    void* get_OnAIInitializedEvent();
    void* get_OnAIUninitializedEvent();
    void* get_SpawningSystemClassName();
    void* get_ResourceSystemClassName();
    void* get_SensorSystemClassName();
    void* get_TeamSystemClassName();
    void* get_GameStateManagerClassName();
    void* get_CorpseManagerClassName();
    void* get_EncounterManagerClassName();
    void* get_POIManagerClassName();
    void* get_NavLinkManagerClassName();
    _Script_RsGameTechRT::RsAISpawningSystem*& get_SpawningSystem();
    _Script_RsGameTechRT::RsAIResourceSystem*& get_ResourceSystem();
    _Script_RsGameTechRT::RsAISensorSystem*& get_SensorSystem();
    _Script_RsGameTechRT::RsAITeamSystem*& get_TeamSystem();
    _Script_RsGameTechRT::RsAIGameStateManager*& get_GameStateManager();
    _Script_RsGameTechRT::RsAICorpseManager*& get_CorpseManager();
    _Script_RsGameTechRT::RsAIEncounterManager*& get_EncounterManager();
    _Script_RsGameTechRT::RsAIPOIManager*& get_POIManager();
    _Script_RsGameTechRT::RsAINavLinkManager*& get_NavLinkManager();
    _Script_AIModule::BehaviorTree*& get_RootBehavior();
    _Script_AIModule::BehaviorTree*& get_AmbientToAlertTransitionBehavior();
    _Script_AIModule::BehaviorTree*& get_AlertToAggroTransitionBehavior();
    _Script_AIModule::BehaviorTree*& get_AggroToAlertTransitionBehavior();
    _Script_AIModule::BehaviorTree*& get_AlertToAmbientTransitionBehavior();
    _Script_AIModule::BehaviorTree*& get_CombatReactionBehavior();
    _Script_AIModule::BehaviorTree*& get_WaitBehavior();
    _Script_AIModule::BehaviorTree*& get_AmbientIdleBehavior();
    _Script_AIModule::BehaviorTree*& get_ScriptedMoveToBehavior();
    _Script_AIModule::BehaviorTree*& get_ConversationBehavior();
    _Script_AIModule::BehaviorTree*& get_PatrolBehavior();
    _Script_AIModule::BehaviorTree*& get_WanderBehavior();
    _Script_AIModule::BehaviorTree*& get_ReturnHomeBehavior();
    _Script_AIModule::BehaviorTree*& get_InvestigateBehavior();
    _Script_AIModule::BehaviorTree*& get_FightIdleBehavior();
    _Script_AIModule::BehaviorTree*& get_POIRootBehavior();
    _Script_AIModule::BehaviorTree*& get_POIDefaultBehavior();
    _Script_RsGameTechRT::RsAIPOIDefinition*& get_POIDefaultDefinition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x580
#pragma pack(pop)
}
