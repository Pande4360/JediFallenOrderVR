#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIResourceProviderId.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIResourceProviderId::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIResourceProviderId");
    return result;
}
