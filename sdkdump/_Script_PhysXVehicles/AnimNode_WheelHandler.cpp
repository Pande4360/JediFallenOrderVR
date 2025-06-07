#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNode_WheelHandler.hpp"
_Script_CoreUObject::Class* _Script_PhysXVehicles::AnimNode_WheelHandler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.AnimNode_WheelHandler");
    return result;
}
