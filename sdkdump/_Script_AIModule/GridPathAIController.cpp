#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "GridPathAIController.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::GridPathAIController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.GridPathAIController");
    return result;
}
