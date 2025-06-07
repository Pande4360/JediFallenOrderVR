#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAILocationSearchStrategy.hpp"
#include "RsAILocationSearchStrategy_LOS.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAILocationSearchStrategy_LOS::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAILocationSearchStrategy_LOS");
    return result;
}
