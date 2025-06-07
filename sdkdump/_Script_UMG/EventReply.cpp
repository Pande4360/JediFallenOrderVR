#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EventReply.hpp"
_Script_CoreUObject::Class* _Script_UMG::EventReply::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.EventReply");
    return result;
}
