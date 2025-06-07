#include "..\FUObjectArray.hpp"
#include "ArchVisCharMovementComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_maxPitch() {
    return *(float*)((uintptr_t)this + 0x808);
}
void* _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_RotationalAcceleration() {
    return (void*)((uintptr_t)this + 0x7e0);
}
void* _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_RotationalDeceleration() {
    return (void*)((uintptr_t)this + 0x7ec);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_WalkingAcceleration() {
    return *(float*)((uintptr_t)this + 0x814);
}
void* _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_MaxRotationalVelocity() {
    return (void*)((uintptr_t)this + 0x7f8);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_WalkingFriction() {
    return *(float*)((uintptr_t)this + 0x80c);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_MinPitch() {
    return *(float*)((uintptr_t)this + 0x804);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_WalkingSpeed() {
    return *(float*)((uintptr_t)this + 0x810);
}
_Script_CoreUObject::Class* _Script_ArchVisCharacter::ArchVisCharMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ArchVisCharacter.ArchVisCharMovementComponent");
    return result;
}
