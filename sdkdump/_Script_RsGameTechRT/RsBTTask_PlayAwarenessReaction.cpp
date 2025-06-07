#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_PlayAwarenessReaction.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_PlayAwarenessReaction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_PlayAwarenessReaction");
    return result;
}
