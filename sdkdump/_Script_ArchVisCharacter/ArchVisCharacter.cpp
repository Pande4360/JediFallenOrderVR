#include "..\FUObjectArray.hpp"
#include "ArchVisCharacter.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
void* _Script_ArchVisCharacter::ArchVisCharacter::get_MoveRightAxisName() {
    return (void*)((uintptr_t)this + 0x7d0);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_LookUpAtRateAxisName() {
    return (void*)((uintptr_t)this + 0x790);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_LookUpAxisName() {
    return (void*)((uintptr_t)this + 0x780);
}
float& _Script_ArchVisCharacter::ArchVisCharacter::get_MouseSensitivityScale_Yaw() {
    return *(float*)((uintptr_t)this + 0x7e4);
}
float& _Script_ArchVisCharacter::ArchVisCharacter::get_MouseSensitivityScale_Pitch() {
    return *(float*)((uintptr_t)this + 0x7e0);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_TurnAxisName() {
    return (void*)((uintptr_t)this + 0x7a0);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_TurnAtRateAxisName() {
    return (void*)((uintptr_t)this + 0x7b0);
}
void* _Script_ArchVisCharacter::ArchVisCharacter::get_MoveForwardAxisName() {
    return (void*)((uintptr_t)this + 0x7c0);
}
_Script_CoreUObject::Class* _Script_ArchVisCharacter::ArchVisCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ArchVisCharacter.ArchVisCharacter");
    return result;
}
