#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintSessionResult.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::BlueprintSessionResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystemUtils.BlueprintSessionResult");
    return result;
}
