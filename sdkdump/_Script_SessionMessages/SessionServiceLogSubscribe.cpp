#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SessionServiceLogSubscribe.hpp"
_Script_CoreUObject::Class* _Script_SessionMessages::SessionServiceLogSubscribe::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SessionMessages.SessionServiceLogSubscribe");
    return result;
}
