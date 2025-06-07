#include "..\FUObjectArray.hpp"
#include "DM_KelpStrand_01_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_RsGameTechRT\RsNavModifierComponent.hpp"
#include "..\_Script_SwGame\SwSimpleDestructibleActor.hpp"
void* _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x750);
}
_Script_CoreUObject::Class* _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Models/Bogano/Breakable/BOG_KelpStrand/DM_KelpStrand_01.DM_KelpStrand_01_C");
    return result;
}
_Script_Engine::SceneComponent*& _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::get_Top() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x758);
}
void _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::UserConstructionScript() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::get_Brake() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::CapsuleComponent*& _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::get_capsule() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x760);
}
_Script_Engine::BoxComponent*& _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x768);
}
_Script_RsGameTechRT::RsNavModifierComponent*& _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::get_RsNavModifier() {
    return *(_Script_RsGameTechRT::RsNavModifierComponent**)((uintptr_t)this + 0x778);
}
void _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::ReceiveBeginPlay() {
    return;
}
void _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::OnLastPhaseDestructed0() {
    return;
}
void _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* HitComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
void _Game_Models_Bogano_Breakable_BOG_KelpStrand_DM_KelpStrand_01::DM_KelpStrand_01_C::ExecuteUbergraph_DM_KelpStrand_01(int32_t EntryPoint) {
    return;
}
