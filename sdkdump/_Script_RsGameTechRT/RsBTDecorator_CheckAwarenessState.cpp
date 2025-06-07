#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIController.hpp"
#include "RsBTDecorator_CheckAwarenessState.hpp"
void* _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessState::get_AwarenessState() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckAwarenessState");
    return result;
}
void _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessState::OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
