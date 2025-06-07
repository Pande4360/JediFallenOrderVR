#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "NavMovementComponent.hpp"
#include "Pawn.hpp"
#include "PawnMovementComponent.hpp"
_Script_CoreUObject::Vector _Script_Engine::PawnMovementComponent::GetPendingInputVector() {
    return;
}
_Script_Engine::Pawn*& _Script_Engine::PawnMovementComponent::get_PawnOwner() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0x200);
}
_Script_Engine::Pawn* _Script_Engine::PawnMovementComponent::GetPawnOwner() {
    return;
}
bool _Script_Engine::PawnMovementComponent::IsMoveInputIgnored() {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::PawnMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PawnMovementComponent");
    return result;
}
_Script_CoreUObject::Vector _Script_Engine::PawnMovementComponent::ConsumeInputVector() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PawnMovementComponent::K2_GetInputVector() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PawnMovementComponent::GetLastInputVector() {
    return;
}
void _Script_Engine::PawnMovementComponent::AddInputVector(_Script_CoreUObject::Vector WorldVector, bool bForce) {
    return;
}
