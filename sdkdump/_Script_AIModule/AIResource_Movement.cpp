#include "..\FUObjectArray.hpp"
#include "AIResource_Movement.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTasks\GameplayTaskResource.hpp"
_Script_CoreUObject::Class* _Script_AIModule::AIResource_Movement::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AIResource_Movement");
    return result;
}
