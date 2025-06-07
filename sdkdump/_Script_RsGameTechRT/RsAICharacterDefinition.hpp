#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsCharacterDefinition.hpp"
namespace _Script_RsTechRT {
struct RsActorTweaksBook;
}
namespace _Script_RsGameTechRT {
struct RsAIAwarenessStateDefinition_Ambient;
}
namespace _Script_RsGameTechRT {
struct RsAIVODefinition;
}
namespace _Script_AIModule {
struct BlackboardData;
}
namespace _Script_RsGameTechRT {
struct RsAIAwarenessStateDefinition_Aggro;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAICharacterDefinition : public RsCharacterDefinition {
    private: char pad_200[0x110]; public:
    void* get_AIClass();
    void* get_TweakFile();
    _Script_RsTechRT::RsActorTweaksBook*& get_Tweaks();
    _Script_RsGameTechRT::RsAIVODefinition*& get_VODefinition();
    void* get_Behaviors();
    _Script_AIModule::BlackboardData*& get_Blackboard();
    float& get_TargetProjectionHeight();
    bool get_bRequiresPathToTarget();
    void set_bRequiresPathToTarget(bool value);
    bool get_bCanReturnHome();
    void set_bCanReturnHome(bool value);
    _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Ambient*& get_AmbientStateDefinition();
    _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Aggro*& get_AggroStateDefinition();
    void* get_AwarenessReactions();
    void* get_AwarenessEvaluators();
    void* get_Taunts();
    void* get_CombatReactions();
    void* get_ZTargetCameraMode();
    void* get_ZTargetFocusSocket();
    float& get_ZTargetMaxDist();
    float& get_NoPathToAttackTargetTimeOut();
    bool get_bUseNoPathToAttackTargetTimeOut();
    void set_bUseNoPathToAttackTargetTimeOut(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x310
#pragma pack(pop)
}
