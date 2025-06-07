#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayResourceSet.hpp"
_Script_CoreUObject::Class* _Script_GameplayTasks::GameplayResourceSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GameplayTasks.GameplayResourceSet");
    return result;
}
