#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISensor.hpp"
#include "RsAISensor_Transference.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISensor_Transference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISensor_Transference");
    return result;
}
