#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsAITeam.hpp"
#include "RsAITeamController.hpp"
_Script_RsGameTechRT::RsAITeamController*& _Script_RsGameTechRT::RsAITeam::get_TeamAIController() {
    return *(_Script_RsGameTechRT::RsAITeamController**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAITeam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAITeam");
    return result;
}
void _Script_RsGameTechRT::RsAITeam::OnTeamMemberDied(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Script_RsGameTechRT::RsAITeam::OnTeamMemberDestroyed(_Script_Engine::Actor* DestroyedActor) {
    return;
}
