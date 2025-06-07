#include "..\FUObjectArray.hpp"
#include "EQSQueryResultSourceInterface.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EQSQueryResultSourceInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EQSQueryResultSourceInterface");
    return result;
}
