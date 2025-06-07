#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "RsAILeashingActor.hpp"
#include "RsAILeashingBox.hpp"
_Script_Engine::BoxComponent*& _Script_RsGameTechRT::RsAILeashingBox::get_BoxComponent() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAILeashingBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAILeashingBox");
    return result;
}
