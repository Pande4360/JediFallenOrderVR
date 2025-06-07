#include "..\FUObjectArray.hpp"
#include "CrowdAgentInterface.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Script_AIModule::CrowdAgentInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.CrowdAgentInterface");
    return result;
}
