#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIControllerBase.hpp"
#include "RsAITeamController.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAITeamController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAITeamController");
    return result;
}
