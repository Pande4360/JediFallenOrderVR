#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
#include "SwBTService_TeamConversation.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwBTService_TeamConversation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwBTService_TeamConversation");
    return result;
}
void _Script_SwGame::SwBTService_TeamConversation::OnConversationFinished(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Script_SwGame::SwBTService_TeamConversation::OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
