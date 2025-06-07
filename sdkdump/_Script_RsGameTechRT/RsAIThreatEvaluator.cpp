#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIAwarenessEvaluator.hpp"
#include "RsAIThreatEvaluator.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIThreatEvaluator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIThreatEvaluator");
    return result;
}
