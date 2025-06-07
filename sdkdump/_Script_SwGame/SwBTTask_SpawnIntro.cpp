#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "SwBTTask_SpawnIntro.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwBTTask_SpawnIntro::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTTask_SpawnIntro");
    return result;
}
void* _Script_SwGame::SwBTTask_SpawnIntro::get_ThisSpawnIntroSettings() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_SwGame::SwBTTask_SpawnIntro::get_ThisSpawnPOISettings() {
    return (void*)((uintptr_t)this + 0x88);
}
void _Script_SwGame::SwBTTask_SpawnIntro::OnTopologyChanged(void* previousMode, void* newMode, float Proximity) {
    return;
}
void _Script_SwGame::SwBTTask_SpawnIntro::OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
void _Script_SwGame::SwBTTask_SpawnIntro::OnMontageBlendingOut(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
