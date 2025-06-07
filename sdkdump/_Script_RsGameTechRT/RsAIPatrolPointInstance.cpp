#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RespawnInstanceData.hpp"
#include "RsAIPatrolPointInstance.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIPatrolPointInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIPatrolPointInstance");
    return result;
}
