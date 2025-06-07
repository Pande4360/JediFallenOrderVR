#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ForeignSplineSegmentData.hpp"
_Script_CoreUObject::Class* _Script_Landscape::ForeignSplineSegmentData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.ForeignSplineSegmentData");
    return result;
}
