#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ForeignWorldSplineData.hpp"
_Script_CoreUObject::Class* _Script_Landscape::ForeignWorldSplineData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.ForeignWorldSplineData");
    return result;
}
