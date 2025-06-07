#include "..\FUObjectArray.hpp"
#include "BlackboardKeyType.hpp"
#include "BlackboardKeyType_Bool.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BlackboardKeyType_Bool::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BlackboardKeyType_Bool");
    return result;
}
