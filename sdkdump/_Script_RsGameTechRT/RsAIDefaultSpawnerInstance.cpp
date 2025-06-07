#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIDefaultSpawnerInstance.hpp"
#include "RsAISpawnerInstance.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIDefaultSpawnerInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIDefaultSpawnerInstance");
    return result;
}
