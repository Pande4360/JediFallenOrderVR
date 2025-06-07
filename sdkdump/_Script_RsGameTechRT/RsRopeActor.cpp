#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsRopeActor.hpp"
#include "RsRopeComponent.hpp"
_Script_RsGameTechRT::RsRopeComponent*& _Script_RsGameTechRT::RsRopeActor::get_RopeComponent() {
    return *(_Script_RsGameTechRT::RsRopeComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsRopeActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsRopeActor");
    return result;
}
