#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "DetourCrowdAIController.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::DetourCrowdAIController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.DetourCrowdAIController");
    return result;
}
