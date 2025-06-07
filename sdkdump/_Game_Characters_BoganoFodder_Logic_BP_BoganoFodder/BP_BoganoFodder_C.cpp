#include "..\FUObjectArray.hpp"
#include "BP_BoganoFodder_C.hpp"
#include "..\_Game_Characters__Shared_Logic_BP_BaseAI\BP_BaseAI_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterDamageModifiers.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
void* _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x2d18);
}
_Script_Engine::SphereComponent*& _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_rightArm() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x2d40);
}
_Script_Engine::ChildActorComponent*& _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_ChildActor() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2d20);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_dismemBody() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2d30);
}
_Script_Engine::CapsuleComponent*& _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_tailCollision1() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x2d28);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_dismemHead() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2d38);
}
_Script_Engine::SphereComponent*& _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_LeftArm() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x2d48);
}
_Script_Engine::SphereComponent*& _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_bodyCollision() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x2d50);
}
float& _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_CauterizeTimeline_Burn_3CD627E74060BA00F39A4BA59EB48D57() {
    return *(float*)((uintptr_t)this + 0x2d58);
}
float& _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_CauterizeTimeline_Overbright_3CD627E74060BA00F39A4BA59EB48D57() {
    return *(float*)((uintptr_t)this + 0x2d5c);
}
void* _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_CauterizeTimeline__Direction_3CD627E74060BA00F39A4BA59EB48D57() {
    return (void*)((uintptr_t)this + 0x2d60);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_CauterizeTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2d68);
}
bool _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_bParriedHeadButt() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d70 + 0)) & 1 != 0;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::set_bParriedHeadButt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::get_bAllowPullout() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d71 + 0)) & 1 != 0;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::CauterizeTimeline__UpdateFunc() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::set_bAllowPullout(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d71 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d71 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BoganoFodder/Logic/BP_BoganoFodder.BP_BoganoFodder_C");
    return result;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::TryDismember() {
    return;
}
_Script_RsGameTechRT::RsCharacterDamageModifiers _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::RsGetDamageModifiers(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageParams, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::UserConstructionScript0() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::CauterizeTimeline__FinishedFunc() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::Died0(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::OnForcePullOverriden0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::DismemberFX() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::UseTraceCollision() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder::BP_BoganoFodder_C::ExecuteUbergraph_BP_BoganoFodder(int32_t EntryPoint) {
    return;
}
