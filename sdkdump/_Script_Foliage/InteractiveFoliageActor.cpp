#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "InteractiveFoliageActor.hpp"
_Script_Engine::CapsuleComponent*& _Script_Foliage::InteractiveFoliageActor::get_CapsuleComponent() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x370);
}
void* _Script_Foliage::InteractiveFoliageActor::get_TouchingActorEntryPosition() {
    return (void*)((uintptr_t)this + 0x378);
}
float& _Script_Foliage::InteractiveFoliageActor::get_FoliageTouchImpulseScale() {
    return *(float*)((uintptr_t)this + 0x3ac);
}
void* _Script_Foliage::InteractiveFoliageActor::get_FoliageVelocity() {
    return (void*)((uintptr_t)this + 0x384);
}
float& _Script_Foliage::InteractiveFoliageActor::get_FoliageStiffness() {
    return *(float*)((uintptr_t)this + 0x3b0);
}
float& _Script_Foliage::InteractiveFoliageActor::get_FoliageDamageImpulseScale() {
    return *(float*)((uintptr_t)this + 0x3a8);
}
void* _Script_Foliage::InteractiveFoliageActor::get_FoliageForce() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_Foliage::InteractiveFoliageActor::get_FoliagePosition() {
    return (void*)((uintptr_t)this + 0x39c);
}
float& _Script_Foliage::InteractiveFoliageActor::get_FoliageStiffnessQuadratic() {
    return *(float*)((uintptr_t)this + 0x3b4);
}
float& _Script_Foliage::InteractiveFoliageActor::get_FoliageDamping() {
    return *(float*)((uintptr_t)this + 0x3b8);
}
float& _Script_Foliage::InteractiveFoliageActor::get_MaxDamageImpulse() {
    return *(float*)((uintptr_t)this + 0x3bc);
}
float& _Script_Foliage::InteractiveFoliageActor::get_MaxTouchImpulse() {
    return *(float*)((uintptr_t)this + 0x3c0);
}
float& _Script_Foliage::InteractiveFoliageActor::get_MaxForce() {
    return *(float*)((uintptr_t)this + 0x3c4);
}
float& _Script_Foliage::InteractiveFoliageActor::get_Mass() {
    return *(float*)((uintptr_t)this + 0x3c8);
}
_Script_CoreUObject::Class* _Script_Foliage::InteractiveFoliageActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.InteractiveFoliageActor");
    return result;
}
void _Script_Foliage::InteractiveFoliageActor::CapsuleTouched(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& OverlapInfo) {
    return;
}
