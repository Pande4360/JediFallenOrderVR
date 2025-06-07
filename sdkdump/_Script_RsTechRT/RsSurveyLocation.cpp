#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSurveyLocation.hpp"
void* _Script_RsTechRT::RsSurveyLocation::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsTechRT::RsSurveyLocation::get_LocationType() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsSurveyLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsSurveyLocation");
    return result;
}
void* _Script_RsTechRT::RsSurveyLocation::get_PointsOfInterest() {
    return (void*)((uintptr_t)this + 0xe8);
}
