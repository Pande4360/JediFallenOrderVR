#include "..\FUObjectArray.hpp"
#include "BP_SlideSpeedVolume_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Game_Characters_Hero_Logic_Components_Navigation_BP_SlideSpeedVolume::BP_SlideSpeedVolume_C::ExecuteUbergraph_BP_SlideSpeedVolume(int32_t EntryPoint) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_BP_SlideSpeedVolume::BP_SlideSpeedVolume_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Game_Characters_Hero_Logic_Components_Navigation_BP_SlideSpeedVolume::BP_SlideSpeedVolume_C::BndEvt__EntryVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
_Script_Engine::BoxComponent*& _Game_Characters_Hero_Logic_Components_Navigation_BP_SlideSpeedVolume::BP_SlideSpeedVolume_C::get_EntryVolume() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x368);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_BP_SlideSpeedVolume::BP_SlideSpeedVolume_C::get_SlideSpeed() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_Engine::SceneComponent*& _Game_Characters_Hero_Logic_Components_Navigation_BP_SlideSpeedVolume::BP_SlideSpeedVolume_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
void _Game_Characters_Hero_Logic_Components_Navigation_BP_SlideSpeedVolume::BP_SlideSpeedVolume_C::UserConstructionScript0() {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_BP_SlideSpeedVolume::BP_SlideSpeedVolume_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/BP_SlideSpeedVolume.BP_SlideSpeedVolume_C");
    return result;
}
