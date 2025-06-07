#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGameStateManager.hpp"
#include "RsBTDecorator_CheckAIGameState.hpp"
void* _Script_RsGameTechRT::RsBTDecorator_CheckAIGameState::get_GameState() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_RsGameTechRT::RsBTDecorator_CheckAIGameState::OnAIGameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckAIGameState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckAIGameState");
    return result;
}
