#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SessionServiceLogUnsubscribe.hpp"
_Script_CoreUObject::Class* _Script_SessionMessages::SessionServiceLogUnsubscribe::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SessionMessages.SessionServiceLogUnsubscribe");
    return result;
}
