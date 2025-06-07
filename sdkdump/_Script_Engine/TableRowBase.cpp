#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TableRowBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::TableRowBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TableRowBase");
    return result;
}
