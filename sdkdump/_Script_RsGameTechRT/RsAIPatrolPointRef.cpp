#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RespawnInstanceDataBlueprintRef.hpp"
#include "RsAIPatrolPointRef.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIPatrolPointRef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIPatrolPointRef");
    return result;
}
