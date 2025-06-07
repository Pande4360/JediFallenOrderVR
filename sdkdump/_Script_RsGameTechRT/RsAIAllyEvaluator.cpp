#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIAllyEvaluator.hpp"
#include "RsAIAwarenessEvaluator.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIAllyEvaluator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIAllyEvaluator");
    return result;
}
