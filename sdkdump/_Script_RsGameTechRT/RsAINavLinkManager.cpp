#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAINavLinkManager.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAINavLinkManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAINavLinkManager");
    return result;
}
