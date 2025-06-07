#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "MK_Functions_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagQuery.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsAIEncounterGroup.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDisabledConstrainedJumpDirections.hpp"
#include "..\_Script_SwGame\R4PlayerController.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
_Script_CoreUObject::Class* _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/zDoNotShip/Playgrounds/Markk/Bluprints/MK_Functions.MK_Functions_C");
    return result;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::isFriendlyAi_(_Script_RsGameTechRT::RsCharacter* AI, _Script_CoreUObject::Object* __WorldContext, bool& Return) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::DisableClimbJumpDirections(_Script_Engine::Actor* Owner, bool Disable, _Script_RsGameTechRT::RsDisabledConstrainedJumpDirections DisabledDirections, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::disableClimbDirectionsByTag(_Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::isDrivingATAT_(_Script_CoreUObject::Object* __WorldContext, bool& True_) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getAIEncounterSpawnees(_Script_RsGameTechRT::RsAIEncounterGroup* Target, _Script_CoreUObject::Object* __WorldContext, void*& Spawnees) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::setAIEncounterScriptingMode(_Script_RsGameTechRT::RsAIEncounterGroup* Target, void* ScriptingMode, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::setPlayerCinematicMode(bool On_, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getFirstFromArray(void*& TargetArray, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Object*& Output, bool& Success_) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::isUXRBuild_(_Script_CoreUObject::Object* __WorldContext, bool& Return) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::DespawnAI(_Script_RsGameTechRT::RsAIEncounterGroup* Target, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getAllActorsOfClassWithTag(void* ActorClass, void* Tag, _Script_CoreUObject::Object* __WorldContext, void*& Objects) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::HighlightObject(_Script_Engine::Actor* Actor, bool Highlight, void* Type, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::Open_Debug_Menu(void* WidgetClass, _Script_CoreUObject::Object* __WorldContext, _Script_UMG::UserWidget*& ReturnWidget, bool& Was_Already_Open_) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::isHeroLookingAt_(_Script_Engine::Actor* Target, float Range, _Script_CoreUObject::Object* __WorldContext, bool& Return) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::GetR4PlayerController(_Script_CoreUObject::Object* __WorldContext, _Script_SwGame::R4PlayerController*& R4Player_Controller) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::setUseOverrideClimbStamina(bool bUseOverrideStaminaRows, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::HeroAxisToUnrealAxis(_Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Rotator& UnrealRotation) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getHeroOrigin(_Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Transform& Transform) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getDistanceFromLocation(_Script_CoreUObject::Vector Location_A, _Script_CoreUObject::Vector Location_B, bool _2D_, _Script_CoreUObject::Object* __WorldContext, float& Distance) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getClosestActorFromLocation(_Script_CoreUObject::Vector Location, void*& Array, _Script_CoreUObject::Object* __WorldContext, _Script_Engine::Actor*& ClosestActor) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getPercentageInRange(float Value, float Min, float Max, _Script_CoreUObject::Object* __WorldContext, float& Percentage) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::isCurrentStartPoint_(_Script_Engine::Actor* Actor, _Script_CoreUObject::Object* __WorldContext, bool& True_) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::setLevelTag(_Script_GameplayTags::GameplayTag Tag, bool Clear_, bool bSaveImmediate, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getFurthestActor(_Script_Engine::Actor* Actor, void*& Array, _Script_CoreUObject::Object* __WorldContext, _Script_Engine::Actor*& FurthestActor) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::isLevelTagSet_(_Script_GameplayTags::GameplayTagQuery Query, _Script_CoreUObject::Object* __WorldContext, bool& True_) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::isSameDirection_(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float ErrorTolerance, _Script_CoreUObject::Object* __WorldContext, bool& Result, float& Dot) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getHero(_Script_CoreUObject::Object* __WorldContext, _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& BP_Hero) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getClosestActor(_Script_Engine::Actor* Actor, void*& Array, _Script_CoreUObject::Object* __WorldContext, _Script_Engine::Actor*& ClosestActor) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getDistanceFromActor(_Script_Engine::Actor* Actor_A, _Script_Engine::Actor* Actor_B, bool _2D_, _Script_CoreUObject::Object* __WorldContext, float& Distance) {
    return;
}
float _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::WrapFloat(float X, float Min_Value, float Max_Value, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::SkeletonCinematicMode(_Script_Engine::SkeletalMeshActor* Target, bool CinematicMode_, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getDistanceFromPlayer(_Script_Engine::Actor* Actor, bool _2D_, _Script_CoreUObject::Object* __WorldContext, float& Distance) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::clampVector(_Script_CoreUObject::Vector VectorIn, float MinX, float MaxX, float MinY, float MaxY, float MinZ, float MaxZ, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::Vector& VectorOut) {
    return;
}
void _Game_zDoNotShip_Playgrounds_Markk_Bluprints_MK_Functions::MK_Functions_C::getInputKeyForHeroControl(void* Control, _Script_CoreUObject::Object* __WorldContext, _Script_InputCore::Key& Key) {
    return;
}
