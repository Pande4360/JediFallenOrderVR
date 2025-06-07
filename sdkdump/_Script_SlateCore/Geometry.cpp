#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Geometry.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::Geometry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.Geometry");
    return result;
}
