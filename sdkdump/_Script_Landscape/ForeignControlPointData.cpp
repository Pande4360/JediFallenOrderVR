#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ForeignControlPointData.hpp"
_Script_CoreUObject::Class* _Script_Landscape::ForeignControlPointData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.ForeignControlPointData");
    return result;
}
