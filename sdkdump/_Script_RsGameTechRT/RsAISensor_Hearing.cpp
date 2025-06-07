#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISensor.hpp"
#include "RsAISensor_Hearing.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISensor_Hearing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISensor_Hearing");
    return result;
}
