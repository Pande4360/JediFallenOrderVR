#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "GameplayTaskOwnerInterface.hpp"
_Script_CoreUObject::Class* _Script_GameplayTasks::GameplayTaskOwnerInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTasks.GameplayTaskOwnerInterface");
    return result;
}
