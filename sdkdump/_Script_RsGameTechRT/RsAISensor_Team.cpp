#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIController.hpp"
#include "RsAISensor.hpp"
#include "RsAISensor_Team.hpp"
#include "RsAISystem.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISensor_Team::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISensor_Team");
    return result;
}
void _Script_RsGameTechRT::RsAISensor_Team::OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
void _Script_RsGameTechRT::RsAISensor_Team::OnAIUninitialized(_Script_RsGameTechRT::RsAISystem* AISystem, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Script_RsGameTechRT::RsAISensor_Team::OnAIInitialized(_Script_RsGameTechRT::RsAISystem* AISystem, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
