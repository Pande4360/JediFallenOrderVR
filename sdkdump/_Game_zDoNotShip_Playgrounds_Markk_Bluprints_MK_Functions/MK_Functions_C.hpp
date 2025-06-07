#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagQuery.hpp"
#include "..\_Script_RsGameTechRT\RsDisabledConstrainedJumpDirections.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsAIEncounterGroup;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_SwGame {
struct R4PlayerController;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_Engine {
struct SkeletalMeshActor;
}
namespace _Script_InputCore {
struct Key;
}
namespace _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions {
#pragma pack(push, 1)
struct MK_Functions_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void disableClimbDirectionsByTag(_Script_CoreUObject::Object* __WorldContext);
    void isDrivingATAT_(_Script_CoreUObject::Object* __WorldContext, bool& True_);
    void setPlayerCinematicMode(bool On_, _Script_CoreUObject::Object* __WorldContext);
    void getFirstFromArray(void*& TargetArray, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Object*& Output, bool& Success_);
    void setAIEncounterScriptingMode(_Script_RsGameTechRT::RsAIEncounterGroup* Target, void* ScriptingMode, _Script_CoreUObject::Object* __WorldContext);
    void getAIEncounterSpawnees(_Script_RsGameTechRT::RsAIEncounterGroup* Target, _Script_CoreUObject::Object* __WorldContext, void*& Spawnees);
    void isFriendlyAi_(_Script_RsGameTechRT::RsCharacter* AI, _Script_CoreUObject::Object* __WorldContext, bool& Return);
    void isUXRBuild_(_Script_CoreUObject::Object* __WorldContext, bool& Return);
    void DisableClimbJumpDirections(_Script_Engine::Actor* Owner, bool Disable, _Script_RsGameTechRT::RsDisabledConstrainedJumpDirections DisabledDirections, _Script_CoreUObject::Object* __WorldContext);
    void DespawnAI(_Script_RsGameTechRT::RsAIEncounterGroup* Target, _Script_CoreUObject::Object* __WorldContext);
    void getAllActorsOfClassWithTag(void* ActorClass, void* Tag, _Script_CoreUObject::Object* __WorldContext, void*& Objects);
    void HighlightObject(_Script_Engine::Actor* Actor, bool Highlight, void* Type, _Script_CoreUObject::Object* __WorldContext);
    void Open_Debug_Menu(void* WidgetClass, _Script_CoreUObject::Object* __WorldContext, _Script_UMG::UserWidget*& ReturnWidget, bool& Was_Already_Open_);
    void isHeroLookingAt_(_Script_Engine::Actor* Target, float Range, _Script_CoreUObject::Object* __WorldContext, bool& Return);
    void GetR4PlayerController(_Script_CoreUObject::Object* __WorldContext, _Script_SwGame::R4PlayerController*& R4Player_Controller);
    void setUseOverrideClimbStamina(bool bUseOverrideStaminaRows, _Script_CoreUObject::Object* __WorldContext);
    void HeroAxisToUnrealAxis(_Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Rotator& UnrealRotation);
    void getHeroOrigin(_Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Transform& Transform);
    void getDistanceFromLocation(_Script_CoreUObject::Vector Location_A, _Script_CoreUObject::Vector Location_B, bool _2D_, _Script_CoreUObject::Object* __WorldContext, float& Distance);
    void getClosestActorFromLocation(_Script_CoreUObject::Vector Location, void*& Array, _Script_CoreUObject::Object* __WorldContext, _Script_Engine::Actor*& ClosestActor);
    void getPercentageInRange(float Value, float Min, float Max, _Script_CoreUObject::Object* __WorldContext, float& Percentage);
    void setLevelTag(_Script_GameplayTags::GameplayTag Tag, bool Clear_, bool bSaveImmediate, _Script_CoreUObject::Object* __WorldContext);
    void getFurthestActor(_Script_Engine::Actor* Actor, void*& Array, _Script_CoreUObject::Object* __WorldContext, _Script_Engine::Actor*& FurthestActor);
    void isCurrentStartPoint_(_Script_Engine::Actor* Actor, _Script_CoreUObject::Object* __WorldContext, bool& True_);
    void isLevelTagSet_(_Script_GameplayTags::GameplayTagQuery Query, _Script_CoreUObject::Object* __WorldContext, bool& True_);
    void isSameDirection_(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float ErrorTolerance, _Script_CoreUObject::Object* __WorldContext, bool& Result, float& Dot);
    void getHero(_Script_CoreUObject::Object* __WorldContext, _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& BP_Hero);
    void getClosestActor(_Script_Engine::Actor* Actor, void*& Array, _Script_CoreUObject::Object* __WorldContext, _Script_Engine::Actor*& ClosestActor);
    void getDistanceFromActor(_Script_Engine::Actor* Actor_A, _Script_Engine::Actor* Actor_B, bool _2D_, _Script_CoreUObject::Object* __WorldContext, float& Distance);
    float WrapFloat(float X, float Min_Value, float Max_Value, _Script_CoreUObject::Object* __WorldContext);
    void SkeletonCinematicMode(_Script_Engine::SkeletalMeshActor* Target, bool CinematicMode_, _Script_CoreUObject::Object* __WorldContext);
    void getDistanceFromPlayer(_Script_Engine::Actor* Actor, bool _2D_, _Script_CoreUObject::Object* __WorldContext, float& Distance);
    void clampVector(_Script_CoreUObject::Vector VectorIn, float MinX, float MaxX, float MinY, float MaxY, float MinZ, float MaxZ, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Vector& VectorOut);
    void getInputKeyForHeroControl(void* Control, _Script_CoreUObject::Object* __WorldContext, _Script_InputCore::Key& Key);
}; // Size: 0x28
#pragma pack(pop)
}
