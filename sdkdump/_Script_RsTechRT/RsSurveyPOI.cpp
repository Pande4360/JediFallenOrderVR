#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSurveyPOI.hpp"
void* _Script_RsTechRT::RsSurveyPOI::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_RsTechRT::RsSurveyPOI::get_DistanceToPenetration() {
    return *(float*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsSurveyPOI::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsSurveyPOI");
    return result;
}
