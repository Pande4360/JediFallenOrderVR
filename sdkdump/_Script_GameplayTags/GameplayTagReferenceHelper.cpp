#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTagReferenceHelper.hpp"
_Script_CoreUObject::Class* _Script_GameplayTags::GameplayTagReferenceHelper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTags.GameplayTagReferenceHelper");
    return result;
}
