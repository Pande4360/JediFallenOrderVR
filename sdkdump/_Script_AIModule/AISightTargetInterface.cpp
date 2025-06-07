#include "..\FUObjectArray.hpp"
#include "AISightTargetInterface.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Script_AIModule::AISightTargetInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISightTargetInterface");
    return result;
}
