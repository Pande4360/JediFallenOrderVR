#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RespawnInstanceDataBlueprintRef.hpp"
#include "RsAISpawnerRef.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawnerRef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAISpawnerRef");
    return result;
}
